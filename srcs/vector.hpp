/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:04:27 by adaloui           #+#    #+#             */
/*   Updated: 2023/02/04 23:02:04 by adaloui          ###   ########.fr       */
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
			vector<T>( void )
			{
				std::cout << BGREEN << "Vector container constructor called" << NORMAL << std::endl;
				return ;
			}
			vector<T>( vector<T> const & copy )
			{
				std::cout << BCYAN << "Vector container copy constructor called" << NORMAL << std::endl;
				*this = copy;
			}
			~vector<T>( void )
			{
				std::cout << BRED << "Vector container destructor called." << NORMAL << std::endl;
				return ;	
			}
			vector<T> & operator=( const vector<T> & rhs )
			{
				std::cout << BPURPLE << "Vector container destructor called." << NORMAL << std::endl;
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
			__SIZE_TYPE__ size( void ) const
			{
				int i;

				i = 0;
				
			}
		private:
			T _tab;
	};

template<typename T, typename Allocator >
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

/*template<typename T, typename Allocator >
bool operator<( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs ) const
{
	return ();
}

template<typename T, typename Allocator >
bool operator<=( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs ) const
{
	return ();
}

template<typename T, typename Allocator >
bool operator>( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs ) const
{
	return ();
}

template<typename T, typename Allocator >
bool operator>=( const vector<T,Allocator> & lhs, const vector<T,Allocator> & rhs ) const
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