/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:04:27 by adaloui           #+#    #+#             */
/*   Updated: 2023/02/05 23:23:08 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

# include "utils.hpp"

namespace ft
{
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
				this->_element = NULL;
				this->_allocator = alloc;
				this->_size = n;
				this->_capacity = n;
				this->_constructor_type = FILL;
				if (this->_size > 0) // PAS SUR D'UTILISER SIZE
				{
					i = 0;
					this->_element = this->_allocator.allocate(n);
					while (i < n)
					{
						this->_allocator.construct(&this->_element[i], val);
						i++;
					}
				}
				return ;
			}
	
		/*-------------------------------Range constructor------------------------------*/
		/*template <class InputIterator>
		vector( InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type() )
		{
			this->_allocator = alloc;
			this->_size = 0;
			return ;
		}*/
		/*-------------------------------Copy constructor-------------------------------*/
		vector ( const vector& x )
		{
			std::cout << BWHITE << "COPY " << BPURPLE << "vector "<< BYELLOW << "container constructor called" << NORMAL << std::endl;
			size_type i;
			this->_allocator = x._allocator;
			this->_size = x._size;
			this->_capacity = x._capacity; //je suis pas sur, cela pourrait etre x.size
			this->_constructor_type = COPY;
			if (this->_size > 0) // PAS SUR D'UTILISER SIZE
			{
				i = 0;
				this->_element = this->_allocator.allocate(this->_size); //pas sur d'utiliser size
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
			~vector<T>( void )
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
				if (this->_size > 0) // PAS SUR D'UTILISER SIZE
				{
					i = 0;
					while (i < this->_size) //PAS SUR D'UTILISER SIZE
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
				size_type i;
				this->_allocator = x._allocator;
				this->_size = x._size;
				this->_capacity = x._capacity; //je suis pas sur, cela pourrait etre x.size
				this->_constructor_type = EQUAL;
				if (this->_size > 0) // PAS SUR D'UTILISER SIZE
				{
					i = 0;
					this->_element = this->_allocator.allocate(this->_size); //pas sur d'utiliser size
					while (i < this->_size) //pas sur d'utiliser size
					{
						this->_allocator.construct(&this->_element[i], x._element[i]);
						i++;
					}
				}
				return (*this);
			}
		/*==============================================================================*/
			void	SetTab( T tab )
			{
				this->_tab = tab;
			}
			T 		GetTab( void )
			{
				return (this->_tab);
			}
		private:
			size_type		_size;
			size_type		_capacity;
			allocator_type	_allocator;
			pointer			_element;
			int				_constructor_type;
			T _tab;
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