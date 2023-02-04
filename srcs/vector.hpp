/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:04:27 by adaloui           #+#    #+#             */
/*   Updated: 2023/02/04 21:43:39 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

# include "utils.hpp"

namespace ft
{
	template<typename T>
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
				//return (this);
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
		private:
			T _tab;

	};

}
#endif