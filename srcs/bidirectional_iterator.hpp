#ifndef BIDIRECTIONAL_ITERATOR_HPP
# define BIDIRECTIONAL_ITERATOR_HPP

# include "random_access_iterator_tag.hpp"
# include "utils.hpp"

namespace ft
{
    template <class Iter>
    class bidirectional_iterator: public ft::iterator<ft::bidirectional_iterator_tag, Iter>
    {
        public:
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
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, iterator_type>::iterator_category		iterator_category;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, iterator_type>::value_type			value_type;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, iterator_type>::difference_type		difference_type;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, iterator_type>::pointer				pointer;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, iterator_type>::reference				reference;
        /*==============================================================================*/
		
		/*==============================================================================*/
		/*---------------------------------CONSTRUCTORS---------------------------------*/
		/*==============================================================================*/
		
		/*------------------------------Default constructor-----------------------------*/	
            bidirectional_iterator(/*ARG*/)
			{
				this->_value = NULL;
				return ;
			}
        /*------------------------------Default constructor-----------------------------*/	
            bidirectional_iterator( pointer _value )
			{
				this->_value = _value;
				return ;
			}
        /*-------------------------------Copy constructor-----------------------------*/	
			bidirectional_iterator( const bidirectional_iterator & copy )
			{
				*this = copy;
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------DESTRUCTOR----------------------------------*/
		/*==============================================================================*/
            ~bidirectional_iterator( void )
            {
                return ;
            }
        /*==============================================================================*/
		/*----------------------------------OPERATOR =----------------------------------*/
		/*==============================================================================*/
			bidirectional_iterator & operator=( const bidirectional_iterator& rhs )
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
			bidirectional_iterator& operator++()
			{
				++this->_value;
				return (*this);
			}
			bidirectional_iterator operator++(int)
			{
				bidirectional_iterator copy(*this);
				++this->_value;
				return (copy);
			} 
		/*-----------------------Bidirectional Iterator Operators-----------------------*/
		/*-------------------------Pre/Post Decrement Operator--------------------------*/
			bidirectional_iterator& operator--()
			{
				--this->_value;
				return (*this);
			}
			bidirectional_iterator operator--(int)
			{
				bidirectional_iterator copy(*this);
				--this->_value;
				return (copy);
			}
			/*Gère le cas où *a est constant, on peut utiliser la méthode 
			de spécialisation des classe, mais ça ne sera pas accepté car
			il faudrait modifier la forme du template en 
			template <class Iter, bool is_const>*/
			operator bidirectional_iterator<const value_type>() const 
			{
				bidirectional_iterator<const value_type> it(this->_value);
				return (it);
			}
		/*==============================================================================*/
		/*----------------------------COMPARISON OPERATORS------------------------------*/
		/*==============================================================================*/
			bool operator>( const bidirectional_iterator & rhs ) const 
			{
				return (this->_value > rhs._value);
			}
			bool operator>=( const bidirectional_iterator & rhs ) const 
			{
				return (this->_value >= rhs._value);
			}
			bool operator<( const bidirectional_iterator & rhs ) const 
			{
				return (this->_value < rhs._value);
			}
			bool operator<=( const bidirectional_iterator & rhs ) const 
			{
				return (this->_value <= rhs._value);
			}
			bool operator==( const bidirectional_iterator & rhs ) const 
			{
				return (this->_value == rhs._value);
			}
			bool operator!=( const bidirectional_iterator & rhs ) const 
			{
				return (this->_value != rhs._value);
			}
        private:
			pointer _value;
    };
}
/*
template <class Iterator>
	bool operator==(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() == rhs.base());
	}
	
	template <class Iterator1, class Iterator2>
	bool operator==(const ft::reverse_iterator<Iterator1> lhs, const ft::reverse_iterator<Iterator2> rhs)
	{
		return (lhs.base() == rhs.base());
	}
	
	template <class Iterator>
	bool operator!= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() != rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator!=(const ft::reverse_iterator<Iterator1> lhs, const ft::reverse_iterator<Iterator2> rhs)
	{
		return (lhs.base() != rhs.base());
	}

	template <class Iterator>
	bool operator< (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() > rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator<(const ft::reverse_iterator<Iterator1> lhs, const ft::reverse_iterator<Iterator2> rhs)
	{
		return (lhs.base() > rhs.base());
	}

	template <class Iterator>
	bool operator<= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() >= rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator<=(const ft::reverse_iterator<Iterator1> lhs, const ft::reverse_iterator<Iterator2> rhs)
	{
		return (lhs.base() >= rhs.base());
	}


template <class Iterator>
	bool operator> (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() < rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator>(const ft::reverse_iterator<Iterator1> lhs, const ft::reverse_iterator<Iterator2> rhs)
	{
		return (lhs.base() < rhs.base());
	}

	template <class Iterator>
	bool operator>= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() <= rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator>=(const ft::reverse_iterator<Iterator1> lhs, const ft::reverse_iterator<Iterator2> rhs)
	{
		return (lhs.base() <= rhs.base());
	}

	template <class Iterator>
	reverse_iterator<Iterator> operator+(typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator> &rev_it)
	{
		return(rev_it + n);
	}

	template <class Iterator>
	typename reverse_iterator<Iterator>::difference_type operator-(const reverse_iterator<Iterator> &lhs, const reverse_iterator<Iterator> &rhs)
	{
		return (rhs.base() - lhs.base());
	}*/

#endif