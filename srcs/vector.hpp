/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:04:27 by adaloui           #+#    #+#             */
/*   Updated: 2023/02/21 16:42:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_TPP
# define VECTOR_TPP

# include "utils.hpp"

class random_access_iterator;

namespace ft
{
	template<class InputIterator>
   	typename ft::iterator_traits<InputIterator>::difference_type
    distance (InputIterator first, InputIterator last)
    {
        typename ft::iterator_traits<InputIterator>::difference_type rtn = 0;
        while (first != last)
        {
            first++;
            rtn++;
        }
        return (rtn);
    }

	template<typename T, typename Allocator = std::allocator<T> >
	class vector
	{
		public:
		/*==============================================================================*/
		/*----------------------------STD::ALLOCATOR ALIASES----------------------------*/
		/*==============================================================================*/
			typedef T											value_type;
			typedef Allocator									allocator_type;
			typedef typename allocator_type::reference			reference;
			typedef typename allocator_type::const_reference	const_reference;
			typedef typename allocator_type::pointer			pointer;
			typedef typename allocator_type::const_pointer		const_pointer;
		
			typedef	ft::random_access_iterator<value_type>		iterator;
			typedef	ft::random_access_iterator<const value_type> const_iterator;
		/*
			typedef			 inconnu							reverse_iterator;
			typedef			 inconnu							const_reverse_iterator;
			*/
			typedef typename allocator_type::difference_type	difference_type;
			typedef typename allocator_type::size_type			size_type;
		/*==============================================================================*/

		/*==============================================================================*/
		/*---------------------------------CONSTRUCTORS---------------------------------*/
		/*==============================================================================*/
		
		/*------------------------------Default constructor-----------------------------*/	
			explicit vector( const allocator_type& alloc = allocator_type() )
			{
				//std::cout << BWHITE << "DEFAULT " << BPURPLE << "vector "<< BGREEN << "container constructor called" << NORMAL << std::endl;
				this->_allocator = alloc;
				this->_size = 0;
				this->_capacity = 0;
				this->_element = NULL;
				this->_constructor_type = DEFAULT;
				return ;
			}
		
		/*-------------------------------Fill constructor-------------------------------*/
		explicit vector( size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type() )
			{
				//std::cout << BWHITE << "FILL " << BPURPLE << "vector "<< BCYAN << "container constructor called" << NORMAL << std::endl;
				size_type i;
				size_type max_size;
				this->_element = NULL;
				this->_allocator = alloc;
				this->_size = n;
				this->_capacity = n;
				this->_constructor_type = FILL;

				max_size = std::numeric_limits<int>::max();
				if (this->_capacity > 0)
				{
					i = 0;
					if (n >= max_size) // nécessité de gérer le throw avant le allocate car valgrind ne laisse pas le temps d'aller au throw avant de crash
						throw std::bad_alloc();
					else
					{
						this->_element = this->_allocator.allocate(n);
						while (i < n)
						{
							this->_allocator.construct(&this->_element[i], val);
							i++;
						}	
					}		
				}
				return ;
			}
		/*-------------------------------Range constructor------------------------------*/
		template <class InputIterator> // terminer le constructeur
        vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(), typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type* = 0)
		{
			this->_allocator = alloc;
			this->_size = 0;

			//this->_capacity = ft::distance(first, last);
			/*NE PAS OUBLIER DE PROTEGER LE ALLOCATE ET DE TOUT METTRE EN WHILE*/

			
			if (this->_capacity > 0) // le conteneur  a déjà été protégé car on ne peut pas créer un conteneur plus grand que la limite, donc pas besoin de protéger le allocate
				this->_element = this->_allocator.allocate(this->_capacity);
			while (first != last)
			{
				this->_allocator.construct(&this->_element[this->_size++], *first);
				first++;
			}
		}
		/*-------------------------------Copy constructor-------------------------------*/
		vector ( const vector& x )
		{
			size_type i;
			this->_allocator = x._allocator;
			this->_size = x._size;
			this->_capacity = x._capacity; //je suis pas sur, cela pourrait etre x.size
			this->_constructor_type = COPY;
			this->_element = x._element;
			if (this->_capacity > 0) // PAS SUR D'UTILISER SIZE
			{
				i = 0;
				this->_element = this->_allocator.allocate(this->_capacity); //pas sur d'utiliser size
				while (i < this->_size) //pas sur d'utiliser size
				{
					this->_allocator.construct(&this->_element[i], x._element[i]);
					i++;
				}
			}
			return ;
		}
		/*==============================================================================*/
		
		/*==============================================================================*/
		/*----------------------------------DESTRUCTOR----------------------------------*/
		/*==============================================================================*/
			~vector( void )
			{
			/*	if (this->_constructor_type == DEFAULT)
					std::cout << BWHITE << "DEFAULT " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
				else if (this->_constructor_type == FILL)
					std::cout << BWHITE << "FILL " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
				else if (this->_constructor_type == RANGE)
					std::cout << BWHITE << "RANGE " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
				else if (this->_constructor_type == COPY)
					std::cout << BWHITE << "COPY " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
				else if (this->_constructor_type == EQUAL)
					std::cout << BWHITE << "EQUAL " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
			*/
				size_type i;
				if (this->_capacity > 0) // PAS SUR D'UTILISER SIZE
				{
					i = 0;
					while (i < this->_capacity) //PAS SUR D'UTILISER SIZE
					{
						this->_allocator.destroy(&this->_element[i]);
						i++;
					}
					/*PEUT ETRE DEVRA UTILISER IF (THIS->_ELEMENT != NULL)*/
					if (this->_element != NULL)
						this->_allocator.deallocate(this->_element, this->_capacity);
				}
				return ;	
			}
		/*==============================================================================*/
		
		/*==============================================================================*/
		/*----------------------------------OPERATOR =----------------------------------*/
		/*==============================================================================*/
			vector& operator=(const vector& x)
			{
				//std::cout << BWHITE << "EQUAL " << BPURPLE << "vector "<< BBLACK << "container overloaded operator called" << NORMAL << std::endl;
				if (*this == x)
					return *this;
				this->clear();
				this->_element = x._element;
				//this->insert(begin(), x.begin(), x.end());
				return (*this);
			}
			
		/*==============================================================================*/
		/*------------------------------FONCTIONS MEMBRES-------------------------------*/
		/*==============================================================================*/

		/*==============================================================================*/
		/*---------------------------------ITERARTORS-----------------------------------*/
		/*==============================================================================*/
		/*------------------------------------BEGIN-------------------------------------*/
	
		iterator begin()
		{
			if (this->empty())
				return (iterator(this->_element + this->size()));
			return (iterator(this->_element));
		}
		const_iterator begin() const
		{
			if (this->empty())
				return (const_iterator(this->_element + this->size()));
			return (const_iterator(this->_element));
		}
		/*------------------------------------END---------------------------------------*/
		iterator end()
		{
			return (iterator(this->_element + this->size()));
		}
		const_iterator end() const
		{
			return (const_iterator(this->_element + this->size()));
		}
		/*------------------------------------RBEGIN------------------------------------*/
		/*------------------------------------REND--------------------------------------*/
		/*==============================================================================*/

		/*==============================================================================*/
		/*----------------------------------CAPACITY------------------------------------*/
		/*==============================================================================*/
		/*------------------------------------SIZE--------------------------------------*/
		size_type size() const
		{
			return (this->_size);
		}
		/*------------------------------------MAX_SIZE----------------------------------*/
		size_type max_size() const
		{
			return (this->_allocator.max_size());
		}
		/*------------------------------------RESIZE------------------------------------*/
		void resize(size_type n, value_type val = value_type())
		{
			size_type i;
			size_type max_size;
			//TESTER LES EXCEPTIONS ET TESTER AVEC VALL == NULL
			
			i = this->_size;
			max_size = std::numeric_limits<int>::max();
			if (n < this->_size)
			{
				while (i < this->_size)
				{
					this->_allocator.destroy(&this->_element[i]);
					i++;
				}
				this->_size = n;
			}
			else if (n == this->_size)
				return ;
			else if (n > this->_size)
			{
				
				if (n >= max_size)
					throw std::bad_alloc();
				else
				{
					this->reserve(n);
					while (i < n)
					{
						this->_allocator.construct(&this->_element[i], val);
						i++;
					}
					this->_size = n;
				}
			}
			return ;
		}
		/*------------------------------------CAPACITY----------------------------------*/
		size_type capacity() const
		{
			return (this->_capacity);
		}
		/*------------------------------------EMPTY-------------------------------------*/
		bool empty() const
		{
		//	std::cout << YELLOW << this->_size << NORMAL << std::endl;
			if (this->size() == 0)
				return (SUCCESS);
			else // The container is empty, it returns true
				return (FAILURE); // The conainter is not empty, it returns fail
		}
		/*------------------------------------RESERVE-----------------------------------*/
		void reserve(size_type n)
		{
			std::string		msg_error;
			vector			tmp;
			size_type 		i;

			msg_error = "\033[1;31mError. \033[1;37mreserve() \033[1;31mcommand failed. Max size allocation reached.\033[0m";
			if (n < this->_capacity)
				return ;
			else if (n == this->_capacity)
				return ;
			else if (n > this->_allocator.max_size())
				throw std::length_error(msg_error); //Si on met nombre vraiment trop grand, bien au-delà du max, ça ne compilera pas
			else
			{
				i = 0;
				tmp._element = this->_allocator.allocate(n);//this->_element;
			//	tmp._element = this->_element;
				if (this->_capacity > 0)
				{
					i = 0;		
					while (i < this->_size)
					{
						this->_allocator.construct(&tmp._element[i], this->_element[i]);
						this->_allocator.destroy(&this->_element[i]);
						i++;
					}
					this->_allocator.deallocate(this->_element, this->_capacity);

				}
				this->_element = tmp._element;			
				this->_capacity = n;
			}
			return ;
		}
		/*------------------------------------SHRINK_TO_FIT-----------------------------*/
		void shrink_to_fit()
		{
			size_type 		i;

			if (this->_capacity > this->_size)
			{
				i = 0;
				while (i < this->_size)
					i++;
				while (i < this->_capacity)
				{
					this->_allocator.destroy(&this->_element[i]);
					i++;
				}
				this->_capacity = this->_size;
				return ;
			}
		}
		/*==============================================================================*/
		
		/*==============================================================================*/
		/*-----------------------------------MODIFIERS----------------------------------*/
		/*==============================================================================*/
		reference operator[]( size_type n )
		{
			return (this->_element[n]);	
		}
		const_reference operator[]( size_type n ) const
		{
			return (this->_element[n]);
		}
		reference at( size_type n )
		{
			if (n > this->_size)
				throw std::out_of_range("\033[1;31mError. \033[1;37mat()\033[1;31m memory out of reach.\033[0m");
			return (this->_element[n]);
		}
		const_reference at( size_type n ) const
		{
			if (n > this->_size)
				throw std::out_of_range("\033[1;31mError. \033[1;37mconst at()\033[1;31m memory out of reach.\033[0m");
			return (this->_element[n]);
		}
		const_reference	front(void) const
		{
			return (this->_element[0]);
		}
		reference		back(void)
		{
			return (this->_element[this->size() - 1]);
		} 
		const_reference	back(void) const
		{
			return (this->_element[this->size() - 1]);
		}
		value_type *data()
		{
			value_type *ret;

			ret = this->_element;
			return (ret);
		}
		const value_type *data() const
		{
			const value_type *ret;

			ret = this->_element;
			return (ret);
		}

		
		
		/*==============================================================================*/

		/*==============================================================================*/
		/*-----------------------------------MODIFIERS----------------------------------*/
		/*==============================================================================*/
		/*------------------------------------ASSIGN------------------------------------*/
		template <class InputIterator>
  		void assign (typename ft::enable_if<!(ft::is_integral<InputIterator>::value), InputIterator>::type first, InputIterator last)
		{
			size_type i;
			size_type dist;
			
			if (this->empty() == FAILURE)
				this->clear();
			this->reserve(distance(first, last));
			if (this->_capacity > 0)
			{
				i = 0;
				dist = distance(first, last);
				while (i < dist)
				{
					this->_allocator.construct(&this->_element[i], *first);
					first++;
					i++;
				}	
			}
			return ;
		}
		
		void assign ( size_type n, const value_type& val )
		{
			size_type i;

			if (this->empty() == FAILURE)
				this->clear();
			this->reserve(n);
			if (this->_capacity > 0)
			{
				i = 0;
				while (i < n)
				{
					this->_allocator.construct(&this->_element[i], val);
					i++;
				}	
			}
			return ;
		}

		/*-----------------------------------PUSH BACK----------------------------------*/
		void push_back( const value_type& val)
		{
			vector tmp;
			size_type i;

			i = 0;
			if (this->capacity() == 0)
			{
				//this->reserve(1);
				this->_capacity = 1;
				this->_element = this->_allocator.allocate(this->capacity());
			}
			else if (this->size() == this->capacity() && this->capacity() > 0)
			{
				tmp._element = this->_allocator.allocate(this->capacity() + 2); // * 2 en cas de bug
				while (i < this->size())
				{
					this->_allocator.construct(&tmp._element[i], this->_element[i]);
					this->_allocator.destroy(&this->_element[i]);
					i++;
				}
				this->_allocator.deallocate(this->_element, this->capacity());
				this->_capacity = this->_capacity + 2; // * 2 en cas de bug
				this->_element = tmp._element;
			}
			this->_allocator.construct(&this->_element[this->size()], val);
			this->_size = this->_size + 1;
			return ;
		}
		/*-----------------------------------POP BACK-----------------------------------*/
		void pop_back()
		{
			size_type i;

			if (this->size() > 0)
			{
				i = 0;
				while (i < this->size())
					i++;
				this->_allocator.destroy(&this->_element[i]);
				this->_size = this->_size - 1;
			}
			return ;
		}
		/*-------------------------------------INSERT----------------------------------*/
		iterator insert( iterator position, const value_type& val )
		{
			difference_type val_pos;
			difference_type capacity;
			size_type		i;

			val_pos = position - this->_element;
			capacity = this->capacity();
			i = 0;
			if (val_pos > capacity)
				reserve(this->_capacity + 1);
			while (i < this->size())
			{	
				this->_allocator.construct(&this->_element[i], this->_element[i + 1]);
				this->_allocator.destroy(&this->_element[i + 1]);
				i++;
			}
			this->_allocator.construct(&this->_element[val_pos], val);
			this->_size = this->_size + 1;
			return (&this->_element[val_pos]);
		}

		/*void insert( iterator position, size_type n, const value_type& val )
		{
			
		}*/
		/*template <class InputIterator>
		void insert( iterator position, InputIterator first, InputIterator last )
		{
			
		}*/

		/*-------------------------------------ERASE-----------------------------------*/
		/*-------------------------------------SWAP------------------------------------*/
		void swap(vector & x)
		{
			vector tmp(*this);
			pointer toto;
			size_type tmp_size;
			size_type tmp_capacity;
			//vector tmp;

			//tmp = *this;
			
			toto = this->_element;
			tmp_capacity = this->_capacity;
			tmp_size = this->_size;
		/*	this->_element = x._element;
			x._element = tmp._element;
			this->_capacity = x._capacity;
			x._capacity = tmp._capacity;
			this->_size = x._size;
			x._size = tmp._size;*/
			this->_element = x._element;
			x._element = toto;
			this->_capacity = x._capacity;
			x._capacity = tmp_capacity;
			this->_size = x._size;
			x._size = tmp_size;
			return ;
		}

		/*-------------------------------------CLEAR-----------------------------------*/
		void clear()
		{
			size_type i;
			size_type initial_size;

			if (this->size() > 0)
			{
				i = 0;
				initial_size = this->size();
				while (i < initial_size)
				{
					this->_allocator.destroy(&this->_element[i]);
					this->_size = this->_size - 1;
					i++;
				}
			}
			this->_size = 0;
			return ;
		}
		/*------------------------------------EMPLACE-----------------------------------*/

		

		/*==============================================================================*/
		private:
			size_type		_size;
			size_type		_capacity;
			allocator_type	_allocator;
			pointer			_element;
			int				_constructor_type;
	};
	
	template<typename T, typename Allocator > 
	bool operator==( const ft::vector<T,Allocator> & lhs, const ft::vector<T,Allocator> & rhs )
	{
		unsigned int i;

		i = 0;
		if (lhs.size() == rhs.size())
		{
			while (i < lhs.size())
			{
				if (lhs[i] != rhs[i])
					return (FAILURE);
				i++;
			}
		}
		else
			return (FAILURE);
		return (SUCCESS);
	}

	template<typename T, typename Allocator >
	bool operator!=( const ft::vector<T,Allocator> & lhs, const ft::vector<T,Allocator> & rhs )
	{
		return (!(rhs == lhs));
	}

	template<typename T, typename Allocator >
	bool operator<( const ft::vector<T,Allocator> & lhs, const ft::vector<T,Allocator> & rhs ) 
	{
		return (lhs < rhs);
	}

	template<typename T, typename Allocator >
	bool operator<=( const ft::vector<T,Allocator> & lhs, const ft::vector<T,Allocator> & rhs ) 
	{
		return (!(lhs < rhs));
	}

	template<typename T, typename Allocator >
	bool operator>( const ft::vector<T,Allocator> & lhs, const ft::vector<T,Allocator> & rhs ) 
	{
		return (lhs > rhs);
	}

	template<typename T, typename Allocator >
	bool operator>=( const ft::vector<T,Allocator> & lhs, const ft::vector<T,Allocator> & rhs ) 
	{
		return (!(lhs > rhs));
	}
}


#endif