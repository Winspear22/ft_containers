/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:04:27 by adaloui           #+#    #+#             */
/*   Updated: 2023/02/10 00:35:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

# include "utils.hpp"

namespace ft
{
	template<bool Cond, class T = void>
	struct enable_if {};
	
	template<class T>
	struct enable_if<true, T> {typedef T type;};
	
	template <class T, T v>
	struct integral_constant
	{
		static const T value = v;
		typedef T value_type;
		typedef integral_constant<T, v> type;
	};

	typedef integral_constant<bool, true> true_type;
	typedef integral_constant<bool, false> false_type;
	
	template <typename> struct is_integral_type :						false_type {};
	template <> struct is_integral_type<bool> :							true_type {};
	template <> struct is_integral_type<char> :							true_type {};
	template <> struct is_integral_type<wchar_t> :						true_type {};
	template <> struct is_integral_type<signed char> :					true_type {};
	template <> struct is_integral_type<short int> :					true_type {};
	template <> struct is_integral_type<int> :							true_type {};
	template <> struct is_integral_type<long int> :						true_type {};
	template <> struct is_integral_type<unsigned char> :				true_type {};
	template <> struct is_integral_type<unsigned short int> :			true_type {};
	template <> struct is_integral_type<unsigned int> :					true_type {};
	template <> struct is_integral_type<unsigned long int> :			true_type {};
	template <> struct is_integral_type<const bool> :					true_type {};
	template <> struct is_integral_type<const char> :					true_type {};
	template <> struct is_integral_type<const wchar_t> :				true_type {};
	template <> struct is_integral_type<const signed char> :			true_type {};
	template <> struct is_integral_type<const short int> :				true_type {};
	template <> struct is_integral_type<const int> :					true_type {};
	template <> struct is_integral_type<const long int> :				true_type {};
	template <> struct is_integral_type<const unsigned char> :			true_type {};
	template <> struct is_integral_type<const unsigned short int> :		true_type {};
	template <> struct is_integral_type<const unsigned int> :			true_type {};
	template <> struct is_integral_type<const unsigned long int> :		true_type {};

	template <class T> struct is_integral : is_integral_type<T> {};
	template<typename T>
	void swap(T &a, T &b)
	{
		T c(a);
		a = b;
		b = c;
	}
	
	template<class It>
	typename std::iterator_traits<It>::difference_type 
    do_distance(It first, It last, std::input_iterator_tag)
	{
    	typename std::iterator_traits<It>::difference_type result = 0;
    	while (first != last) {
        	++first;
        	++result;
    	}
    	return result;
	}

	template<class It>
	typename std::iterator_traits<It>::difference_type 
    do_distance(It first, It last, std::random_access_iterator_tag)
	{
    	return last - first;
	}

	
	template<class It>
	typename std::iterator_traits<It>::difference_type 
	distance(It first, It last)
	{
    	return ft::do_distance(first, last,
                               typename std::iterator_traits<It>::iterator_category());
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
			/*
			typedef 		 inconnu							iterator;
			typedef			 inconnu							const_iterator;
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
				std::cout << BWHITE << "DEFAULT " << BPURPLE << "vector "<< BGREEN << "container constructor called" << NORMAL << std::endl;
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
				std::cout << BWHITE << "FILL " << BPURPLE << "vector "<< BCYAN << "container constructor called" << NORMAL << std::endl;
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
			
			if (this->_capacity)
				this->_element = this->_allocator.allocate(this->_capacity);
			for (; first != last; first++) 
				this->_allocator.construct(&this->_element[this->_size++], *first);
		}
		/*-------------------------------Copy constructor-------------------------------*/
		vector ( const vector& x )
		{
			std::cout << BWHITE << "COPY " << BPURPLE << "vector "<< BYELLOW << "container constructor called" << NORMAL << std::endl;
			size_type i;
			this->_allocator = x._allocator;
			this->_size = x._size;
			this->_capacity = x._capacity; //je suis pas sur, cela pourrait etre x.size
			this->_constructor_type = COPY;
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
				if (this->_constructor_type == DEFAULT)
					std::cout << BWHITE << "DEFAULT " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
				else if (this->_constructor_type == FILL)
					std::cout << BWHITE << "FILL " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
				else if (this->_constructor_type == RANGE)
					std::cout << BWHITE << "RANGE " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
				else if (this->_constructor_type == COPY)
					std::cout << BWHITE << "COPY " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
				else if (this->_constructor_type == EQUAL)
					std::cout << BWHITE << "EQUAL " << BPURPLE << "vector "<< BRED << "container destructor called." << NORMAL << std::endl;
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
					this->_allocator.deallocate(this->_element, this->_capacity);
				}
				return ;	
			}
		/*==============================================================================*/
		
		/*==============================================================================*/
		/*----------------------------------OPERATOR =----------------------------------*/
		/*==============================================================================*/
			vector& operator= (const vector& x)
			{
				std::cout << BWHITE << "EQUAL " << BPURPLE << "vector "<< BBLACK << "container overloaded operator called" << NORMAL << std::endl;
				this->_allocator = x._allocator;
				this->_size = x._size;
				this->_capacity = x._capacity; //je suis pas sur, cela pourrait etre x.size
				this->_constructor_type = EQUAL;
				return (*this);
			}
		
		/*==============================================================================*/
		/*------------------------------FONCTIONS MEMBRES-------------------------------*/
		/*==============================================================================*/

		/*==============================================================================*/
		/*---------------------------------ITERARTORS-----------------------------------*/
		/*==============================================================================*/
		/*------------------------------------BEGIN-------------------------------------*/
		/*------------------------------------END---------------------------------------*/
		/*------------------------------------RBEGIN------------------------------------*/
		/*------------------------------------REND--------------------------------------*/
		/*------------------------------------CBEGIN------------------------------------*/
		/*------------------------------------CEND--------------------------------------*/
		/*------------------------------------CRBEGIN-----------------------------------*/
		/*------------------------------------CREND-------------------------------------*/
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
		/*------------------------------------CAPACITY----------------------------------*/
		size_type capacity() const
		{
			return (this->_capacity);
		}
		/*------------------------------------EMPTY-------------------------------------*/
		bool empty() const
		{
			if (this->_size == 0)
				return (SUCCESS); // The container is empty, it returns true
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
				tmp._element = this->_element;
				if (this->_capacity > 0)
				{
					i = 0;					
					while (i < this->_capacity)
					{
						
						this->_allocator.construct(&tmp._element[i], n);
						this->_allocator.destroy(&this->_element[i]);
						i++;
					}
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
			}
		}
		/*==============================================================================*/


		
		/*==============================================================================*/
		private:
			size_type		_size;
			size_type		_capacity;
			allocator_type	_allocator;
			pointer			_element;
			int				_constructor_type;
	};
}
/*template<typename T, typename Allocator >
bool operator==( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs )
{
	int i;

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
bool operator!=( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs )
{
	return (lhs == rhs);
}
}
*/
/*template<typename T, typename Allocator >
bool operator<( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs ) 
{
	return ();
}

template<typename T, typename Allocator >
bool operator<=( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs ) 
{
	return ();
}

template<typename T, typename Allocator >
bool operator>( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs ) 
{
	return ();
}

template<typename T, typename Allocator >
bool operator>=( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs ) 
{
	return ();
}

}*/

/*---------------------CLASSE TEST----------------------*/
class A
{
public:
	A( void );
	~A( void );
	int getA( void );
private:
	int a;
/*-----------------------------------------------------*/
};
#endif