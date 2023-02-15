#ifndef RANDOM_ACCESS_ITERATOR_HPP
# define RANDOM_ACCESS_ITERATOR_HPP

# include "random_access_iterator_tag.hpp"
# include "utils.hpp"
namespace ft
{
	template <class Iter>
	class random_access_iterator : ft::iterator<ft::random_access_iterator_tag, Iter> 
	{
		public :
		/*==============================================================================*/
		/*----------------------------STD::ITERATOR ALIASES-----------------------------*/
		/*==============================================================================*/
		/*This is a specialization of the previous iterator template that you can find  */
		/*in the file iterator.hpp. You see that we simply add the tag and type of the  */
		/*iterator that we want to create; It is a random_access type of iterator, and  */
		/*of type "iteraor_type" (int, char, etc...). Typedefs are used to simplify     */
		/*the calls just like in the vector.hpp file and all the other files			*/
		/*------------------------------------------------------------------------------*/
			typedef	Iter																						iterator_type;
			typedef typename ft::iterator<ft::random_access_iterator_tag, iterator_type>::iterator_category		iterator_category;
			typedef typename ft::iterator<ft::random_access_iterator_tag, iterator_type>::value_type			value_type;
			typedef typename ft::iterator<ft::random_access_iterator_tag, iterator_type>::difference_type		difference_type;
			typedef typename ft::iterator<ft::random_access_iterator_tag, iterator_type>::pointer				pointer;
			typedef typename ft::iterator<ft::random_access_iterator_tag, iterator_type>::reference				reference;
		/*==============================================================================*/
		
		/*==============================================================================*/
		/*---------------------------------CONSTRUCTORS---------------------------------*/
		/*==============================================================================*/
		
		/*------------------------------Default constructor-----------------------------*/	
			random_access_iterator(/*ARG*/): _value()
			{
				std::cout << "Vector random access iterator empty default constructor called." << std::endl;
				return ;
			}
		/*------------------------------Default constructor-----------------------------*/	
			random_access_iterator( pointer _value )
			{
				this->_value = _value;
				std::cout << "Vector random access iterator default constructor called." << std::endl;

				return ;
			}
		/*-------------------------------Copy constructor-----------------------------*/	

			random_access_iterator( const random_access_iterator & copy )
			{
				std::cout << "Vector random access iterator copy constructor called." << std::endl;
				*this = copy;
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------DESTRUCTOR----------------------------------*/
		/*==============================================================================*/
			~random_access_iterator( void )
			{
				std::cout << "Vector random access iterator destructor called." << std::endl;
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------OPERATOR =----------------------------------*/
		/*==============================================================================*/
		/*random_access_iterator &operator=( const random_access_iterator& rhs )
		{
			std::cout << "Vector random access iterator operator= called." << std::endl;
			this->_value = rhs._value;
			return (*this);
		}*/
			random_access_iterator &operator=(const random_access_iterator &rhs)
			{
				std::cout << "Vector random access iterator operator= called." << std::endl;

				if (*this == rhs)
					return (*this);
				else
					this->_value = rhs._value;
				return (*this);
			}
		
			random_access_iterator &operator++(void)
			{
				++this->_value;
				return (*this);
			}

			random_access_iterator operator++(int)
			{
				random_access_iterator tmp(*this);
				operator++();
				return (tmp);
			}
			bool operator==(const random_access_iterator& op) const 
			{
				return (this->_value == op._value);
			};
		
		reference operator*(void) const {return *this->_value;};

			bool operator!=(const random_access_iterator& op) const 
			{
				return (this->_value != op._value);
			};
		private:
			pointer _value;
	};
	
}

#endif