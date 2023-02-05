/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:04:27 by adaloui           #+#    #+#             */
/*   Updated: 2023/02/05 21:51:16 by adaloui          ###   ########.fr       */
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
			explicit vector (const allocator_type& alloc = allocator_type())
			{
				this->_allocator = alloc;
				this->_size = 0;
				this->_capacity = 0;
				/*NE PAS OUBLIER POINTER VECTOR */
				std::cout << BGREEN << "Default vector container constructor called" << NORMAL << std::endl;
				return ;
			}
		
		/*-------------------------------Fill constructor-------------------------------*/
			explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
			{
				this->_allocator = alloc;
				this->_size = n;
				this->_capacity = n;
				/*NE PAS OUBLIER POINTER VECTOR */
				(void)val;
				std::cout << BGREEN << "Fill vector container constructor called" << NORMAL << std::endl;
			}
		/*-------------------------------Range constructor------------------------------*/
		/*-------------------------------Copy constructor-------------------------------*/
		/*==============================================================================*/
		
		/*==============================================================================*/
		/*----------------------------------DESTRUCTOR----------------------------------*/
		/*==============================================================================*/
			~vector<T>( void )
			{
				std::cout << BRED << "vector container destructor called." << NORMAL << std::endl;
				return ;	
			}
		/*==============================================================================*/
			vector<T> & operator=( const vector<T> & rhs )
			{
				std::cout << BPURPLE << "Operator= " << WHITE << "of vector container called called." << NORMAL << std::endl;
				this->_tab = rhs._tab;
				return (*this);
			}
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