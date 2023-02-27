#ifndef RANDOM_ACCESS_ITERATOR_HPP
# define RANDOM_ACCESS_ITERATOR_HPP

# include "random_access_iterator_tag.hpp"
# include "utils.hpp"
namespace ft
{
	template <class Iter>
	class random_access_iterator: public ft::iterator<ft::random_access_iterator_tag, Iter> 
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
			random_access_iterator(/*ARG*/)
			{
				this->_value = NULL;
				return ;
			}
		/*------------------------------Default constructor-----------------------------*/	
			random_access_iterator( pointer _value )
			{
				this->_value = _value;
				return ;
			}
		/*-------------------------------Copy constructor-----------------------------*/	

			random_access_iterator( const random_access_iterator & copy )
			{
				*this = copy;
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------DESTRUCTOR----------------------------------*/
		/*==============================================================================*/
			~random_access_iterator( void )
			{
				return ;
			}

		/*==============================================================================*/
		/*----------------------------------OPERATOR =----------------------------------*/
		/*==============================================================================*/
			random_access_iterator &operator=( const random_access_iterator& rhs )
			{
				this->_value = rhs._value;
				return (*this);
			}
		/*==============================================================================*/
		/*---------------------------------OPERATOR LIST--------------------------------*/
		/*==============================================================================*/

		/*-----------------------------Dereference Operator-----------------------------*/	
			reference operator*() const
			{
				return *(this->_value);
			}
		/*-------------------------Class Member Access Operator-------------------------*/
			pointer operator->() const
			{
				return (&(*this->_value));
			}
		/*---------------------------Input Iterator Operators---------------------------*/
		/*-------------------------Pre/Post Increment Operator--------------------------*/
			random_access_iterator& operator++()
			{
				++this->_value;
				return (*this);
			}
			random_access_iterator operator++(int)
			{
				random_access_iterator copy(*this);
				++this->_value;
				return (copy);
			} 
		/*-----------------------Bidirectional Iterator Operators-----------------------*/
		/*-------------------------Pre/Post Decrement Operator--------------------------*/
			random_access_iterator& operator--()
			{
				--this->_value;
				return (*this);
			}
			random_access_iterator operator--(int)
			{
				random_access_iterator copy(*this);
				--this->_value;
				return (copy);
			} 
		/*-----------------------Random Access Iterator Operators-----------------------*/
		/*-----------------------Square bracket Iterator Operator-----------------------*/
			reference			operator[]( const difference_type& i ) const
			{
				return (this->_value[i]);
			}
		/*-----------------------------+= Iterator Operator-----------------------------*/
			random_access_iterator& operator+=( const difference_type& i )
			{
				this->_value = this->_value + i;
				return (*this);
			}
		/*------------------------------+ Iterator Operator-----------------------------*/
			random_access_iterator operator+( const difference_type& i ) const
			{
				return (this->_value + i);
			}
		/*---------------------------- -= Iterator Operator-----------------------------*/
			random_access_iterator& operator-=( const difference_type& i )
			{
				this->_value = this->_value - i;
				return (*this);
			}
		/*----------------------------- - Iterator Operator-----------------------------*/
			random_access_iterator operator-( const difference_type i ) 
			{
				return (this->_value - i);
			}

			difference_type operator-(const random_access_iterator &rhs) const
			{
				return (this->_value - rhs._value);
			}

			/*Je n'ai pas compris celui-là*/
			operator random_access_iterator<const value_type>() const 
			{
				return (random_access_iterator<const value_type>(this->_value));
			}
			
			pointer base(void) const
			{
				return (this->_value);
			}

		/*-----------------------*/
			

			bool operator>( const random_access_iterator& rhs ) const 
			{
				return (this->_value > rhs._value);
			}
			bool operator>=( const random_access_iterator& rhs ) const 
			{
				return (this->_value >= rhs._value);
			}
			bool operator<( const random_access_iterator& rhs ) const 
			{
				return (this->_value < rhs._value);
			}
			bool operator<=( const random_access_iterator& rhs ) const 
			{
				return (this->_value <= rhs._value);
			}
			bool operator==( const random_access_iterator& rhs ) const 
			{
				return (this->_value == rhs._value);
			}
			bool operator!=( const random_access_iterator& rhs ) const 
			{
				return (this->_value != rhs._value);
			}
		private:
			pointer _value;
	};
	
	template <class Iterator>
	bool operator<(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs)
	{
		return (lhs < rhs);
	}
	
	template <class Iterator1, class Iterator2>
	bool operator<(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() < rhs.base());
	}
	
	template <class Iterator>
	bool operator>(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs) 
	{
		return (lhs > rhs);
	}

	template <class Iterator1, class Iterator2>
	bool operator>(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() > rhs.base());
	}

	template <class Iterator>
	bool operator>=(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs) 
	{
		return (lhs >= rhs);
	}

	template <class Iterator1, class Iterator2>
	bool operator>=(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() >= rhs.base());
	}

	template <class Iterator>
	bool operator<=(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs) 
	{
		return (lhs <= rhs);
	}

	template <class Iterator1, class Iterator2>
	bool operator<=(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() <= rhs.base());
	}

	template <class Iterator>
	bool operator==(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs) 
	{
		return (lhs == rhs);
	}

	template <class Iterator1, class Iterator2>
	bool operator==(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() == rhs.base());
	}

	template <class Iterator>
	bool operator!=(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs) 
	{
		return (lhs != rhs);
	}

	template <class Iterator1, class Iterator2>
	bool operator!=(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() != rhs.base());
	}

	template <class Iterator>
	typename ft::random_access_iterator<Iterator>::difference_type operator-(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs) 
	{
		/*ici*/
		return (lhs - rhs);
	}
	template <class Iterator1, class Iterator2>
	typename ft::random_access_iterator<Iterator1>::difference_type operator-(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() - rhs.base());
	}
	template <typename Iterator>
	ft::random_access_iterator<Iterator> operator-(typename random_access_iterator<Iterator>::difference_type n, const ft::random_access_iterator<Iterator>& lhs) 
	{
		return (lhs - n);
	}

	template <class Iterator>
	typename ft::random_access_iterator<Iterator>::difference_type operator+(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs) 
	{
		return (lhs + rhs);
	}
	template <class Iterator1, class Iterator2>
	typename ft::random_access_iterator<Iterator1>::difference_type operator+(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() + rhs.base());
	}
	template <typename Iterator>
	ft::random_access_iterator<Iterator> operator+(typename random_access_iterator<Iterator>::difference_type n, ft::random_access_iterator<Iterator>& lhs) 
	{
		return (lhs + n);
	}
}

#endif