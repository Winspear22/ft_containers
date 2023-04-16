#ifndef RANDOM_ACCESS_ITERATOR_HPP
# define RANDOM_ACCESS_ITERATOR_HPP

# include "random_access_iterator_tag.hpp"
# include "utils.hpp"
namespace ft
{
	/*VERIFIER PLUS EN DETAIL LES RELATIONAL OPERATORS HORS CLASSE ET LE CONVERTISSEUR DE CONST*/
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
			random_access_iterator & operator=( const random_access_iterator& rhs )
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

			/*Gère le cas où *a est constant, on peut utiliser la méthode 
			de spécialisation des classe, mais ça ne sera pas accepté car
			il faudrait modifier la forme du template en 
			template <class Iter, bool is_const>*/
			operator random_access_iterator<const value_type>() const 
			{
				random_access_iterator<const value_type> it(this->_value);
				return (it);
			}
			pointer base(void) const
			{
				return (this->_value);
			}

		/*==============================================================================*/
		/*----------------------------COMPARISON OPERATORS------------------------------*/
		/*==============================================================================*/			
			/*Sert à comparer les itérateurs du même type, à savoir const/const ou nonconst/nonconst*/
			bool operator>( const random_access_iterator & rhs ) const 
			{
				return (this->_value > rhs._value);
			}
			bool operator>=( const random_access_iterator & rhs ) const 
			{
				return (this->_value >= rhs._value);
			}
			bool operator<( const random_access_iterator & rhs ) const 
			{
				return (this->_value < rhs._value);
			}
			bool operator<=( const random_access_iterator & rhs ) const 
			{
				return (this->_value <= rhs._value);
			}
			bool operator==( const random_access_iterator & rhs ) const 
			{
				return (this->_value == rhs._value);
			}
			bool operator!=( const random_access_iterator & rhs ) const 
			{
				return (this->_value != rhs._value);
			}
		private:
			pointer _value;
	};
	
	/*On rajoute ces cas de figure pour gérer le cas où on a un const iterator. On ne le met pas directement dans 
	la structure car on a déjà des surcharges d'opérateurs et il ne semble pas que celles qui vont suivre soient mentionnées
	dans le main, ça permet de faire passer le test 1 */
	template <class Iterator1, class Iterator2>
	bool operator<(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() < rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator>(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() > rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator>=(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() >= rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator<=(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() <= rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator==(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() == rhs.base());
	}

	template <class Iterator1, class Iterator2>
	bool operator!=(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() != rhs.base());
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

/*La première surcharge d'opérateur + permet d'additionner deux itérateurs de même type (Iterator).*/
	template <class Iterator>
	typename ft::random_access_iterator<Iterator>::difference_type operator+(const ft::random_access_iterator<Iterator>& lhs, const ft::random_access_iterator<Iterator>& rhs) 
	{
		return (lhs + rhs);
	}
/*La deuxième surcharge d'opérateur + permet d'additionner deux itérateurs de types différents (Iterator1 et Iterator2). */
	template <class Iterator1, class Iterator2>
	typename ft::random_access_iterator<Iterator1>::difference_type operator+(const ft::random_access_iterator<Iterator1> lhs, const ft::random_access_iterator<Iterator2> rhs) 
	{
		return (lhs.base() + rhs.base());
	}
/*La troisième surcharge d'opérateur + est la plus utile et la plus couramment utilisée. Elle permet d'ajouter un entier (de type difference_type) à un itérateur de type random_access_iterator.*/
	template <typename Iterator>
	ft::random_access_iterator<Iterator> operator+(typename random_access_iterator<Iterator>::difference_type n, ft::random_access_iterator<Iterator>& lhs) 
	{
		return (lhs + n);
	}

}

#endif