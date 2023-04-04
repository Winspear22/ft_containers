/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:04:27 by adaloui           #+#    #+#             */
/*   Updated: 2023/02/27 15:32:35 by user42           ###   ########.fr       */
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
			typedef			 ft::reverse_iterator<iterator>			reverse_iterator;
			typedef			 ft::reverse_iterator<const_iterator>	const_reverse_iterator;
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

			this->_capacity = ft::distance(first, last);
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
			this->_capacity = x._size; //je suis pas sur, cela pourrait etre x.size
			this->_constructor_type = COPY;
			this->_element = x._element;
			if (this->_capacity > 0)
			{
				i = 0;
				this->_element = this->_allocator.allocate(this->_capacity);
				while (i < this->_size)
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
				size_type i;
				if (this->_capacity > 0)
				{
					i = 0;
					while (i < this->_size)
					{
						this->_allocator.destroy(&this->_element[i]);
						i++;
					}
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
				if (*this == x)
					return *this;
				if (this->empty() == FAILURE)
					this->clear();
				this->insert(begin(), x.begin(), x.end());
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
		reverse_iterator rbegin(void)
			{
				return (reverse_iterator(this->_element + this->_size));
			}

			const_reverse_iterator rbegin(void) const
			{
				return (const_reverse_iterator(this->_element + this->_size));
			}
			
			reverse_iterator rend(void)
			{
				return (reverse_iterator(this->_element));
			}

			const_reverse_iterator rend(void) const
			{
				return (const_reverse_iterator(this->_element));
			}
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
		/*FAIS FONCTIONNER LE TEST INCEPTION REGARDER LA DIFFERCENCE AVEC MA PROPRE FONCTION*/
		void resize(size_type n, value_type val = value_type())
		{
			size_type i;
			size_type max_size;
			//TESTER LES EXCEPTIONS ET TESTER AVEC VALL == NULL
			
			i = this->_size;
			max_size = std::numeric_limits<int>::max();
			if (n < this->_size)
			{
				i = n;
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
					if (this->_size * 2 >= n)
						this->reserve (this->_size * 2);
					else
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
			if (this->size() == 0)
				return (SUCCESS); // The container is empty, it returns true
			else
				return (FAILURE); // The container is not empty, it returns fail
		}
		/*------------------------------------RESERVE-----------------------------------*/
		void reserve(size_type n)
		{
			std::string		msg_error;
			vector			tmp;
			size_type 		i;

			msg_error = "vector::reserve";
			if (n < this->_capacity)
				return ;
			else if (n == this->_capacity)
				return ;
			else if (n > this->_allocator.max_size())
				throw std::length_error(msg_error); //Si on met nombre vraiment trop grand, bien au-delà du max, ça ne compilera pas
			else
			{
				i = 0;
				tmp._element = this->_allocator.allocate(n);
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
		reference	front(void)
		{
			return (this->_element[0]);
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
			if (this->empty() == FAILURE)
				clear();
			this->insert (begin(), first, last);
			return ;
		}
		
		void assign ( size_type n, const value_type& val )
		{
			if (this->empty() == FAILURE)
				clear();
			insert(begin(), n, val);
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
				this->_capacity = 1;
				this->_element = this->_allocator.allocate(this->capacity());
			}
			else if (this->size() == this->capacity() && this->capacity() > 0)
			{
				tmp._element = this->_allocator.allocate(this->capacity() * 2); // * 2 en cas de bug
				while (i < this->size())
				{
					this->_allocator.construct(&tmp._element[i], this->_element[i]);
					this->_allocator.destroy(&this->_element[i]);
					i++;
				}
				this->_allocator.deallocate(this->_element, this->capacity());
				this->_capacity = this->_capacity * 2; // * 2 en cas de bug
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
				this->_allocator.destroy(&this->_element[i - 1]);
				this->_size = this->_size - 1;
			}
			return ;
		}
		/*-------------------------------------INSERT----------------------------------*/
		iterator insert( iterator position, const value_type& val )
		{
			difference_type 	val_pos;
			difference_type		i;

			val_pos = position - this->_element;
			i = this->_size;
			if (this->_size + 1 > this->_capacity)
				reserve(this->_size + 1);
			while (i > val_pos)
			{	
				this->_allocator.construct(&this->_element[i], this->_element[i - 1]);
				this->_allocator.destroy(&this->_element[i - 1]);
				i--;
			}
			this->_allocator.construct(&this->_element[val_pos], val);
			this->_size = this->_size + 1;

			return (&this->_element[val_pos]);
		}

		void insert( iterator position, size_type n, const value_type& val )
		{
			size_type		 	j;
			size_type 			max_size;
			difference_type		i;
			difference_type 	val_pos;
			
			max_size = std::numeric_limits<int>::max();
			if (n >= max_size)
				throw std::bad_alloc();
			else if (n == 0)
				return ;
			else
			{
				val_pos = position - this->_element;
				if (this->size() + n > this->_capacity)
				{//Verifier ces conditions
					if (this->_size + n > this->_size * 2)
						reserve(this->_size + n);
					else
						reserve(this->_size * 2);
				}
				i = this->_size;
				while (i > val_pos)
				{
					this->_allocator.construct(&this->_element[i + n - 1], this->_element[i - 1]);
					this->_allocator.destroy(&this->_element[i - 1]);
					i--;
				}
				j = -1;
				while (++j < n)
					this->_allocator.construct(&this->_element[val_pos + j], val);
				this->_size = this->_size + n;
			}
			return ;
		}
		
		template<class InputIterator>
		void	insert(iterator position, InputIterator first, InputIterator last, typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type* = 0)
		{
			size_type		 	j;
			size_type			n;
			difference_type		i;
			difference_type 	val_pos;

			n = ft::distance(first, last);
			val_pos = position - this->_element;
										if (this->size() + n > this->_capacity)
											reserve(this->_size + n);
			if (n + this->_size > this->_capacity)
			{
				if (this->_size + n > this->_size * 2)
					reserve(this->size() + n);
				else
					reserve(this->size() * 2);
			}
			i = this->size();
			while (i > val_pos)
			{
				this->_allocator.construct(&this->_element[i + n - 1], this->_element[i - 1]);
				this->_allocator.destroy(&this->_element[i - 1]);
				i--;
			}
			j = 0;
			while (first != last)
			{
				this->_allocator.construct(&this->_element[val_pos + j], *first);
				first++;
				j++;
			}
			this->_size = this->_size + n;

			return ;
		}
		/*-------------------------------------ERASE-----------------------------------*/
		
		iterator erase( iterator position )
		{
			difference_type val_pos;
			difference_type i;

			val_pos = position - this->_element;
			i = this->size();
			while (val_pos < i - 1)
			{
				this->_allocator.destroy(&this->_element[val_pos]);
				this->_allocator.construct(&this->_element[val_pos], this->_element[val_pos + 1]);
				val_pos++;
			}
			this->_allocator.destroy(&this->_element[this->size() - 1]);
			this->_size = this->_size - 1;
			return (position);
		}
		
		iterator erase(iterator first, iterator last)
		{
				size_type	pos = ft::distance(first, last);
				for (size_type i = first - this->_element; i < this->_size - pos; i++)
				{
					this->_allocator.destroy(&this->_element[i]);
					this->_allocator.construct(&this->_element[i], this->_element[i + pos]);
				}
				for (size_type i = this->_size - pos; i < this->_size; i++)
					this->_allocator.destroy(&this->_element[i]);
				this->_size -= pos;
				return  (first);
			}
		/*-------------------------------------SWAP------------------------------------*/
		void swap(vector & x)
		{
			vector tmp(*this);
			pointer toto;
			size_type tmp_size;
			size_type tmp_capacity;
			
			toto = this->_element;
			tmp_capacity = this->_capacity;
			tmp_size = this->_size;
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

		/*==============================================================================*/
		private:
			size_type		_size;
			size_type		_capacity;
			allocator_type	_allocator;
			pointer			_element;
			int				_constructor_type;
	};
template <class T, class Alloc>
void swap(vector<T, Alloc>& x, vector<T, Alloc>& y) 
{
	x.swap(y);
}
}

#endif