#ifndef REVERSE_ITERATOR
# define REVERSE_ITERATOR

# include "utils.hpp"
namespace ft
{
	template <class Iterator>
	class reverse_iterator
	{
		public:
		/*==============================================================================*/
		/*----------------------------STD::ITERATOR ALIASES-----------------------------*/
		/*==============================================================================*/
		/*------------------------------------------------------------------------------*/
			/*typedef	Iterator															iterator_type;
			typedef typename ft::iterator_traits<ft::Iterator>::iterator_category		iterator_category;
			typedef typename ft::iterator_traits<ft::Iterator>::value_type				value_type;
			typedef typename ft::iterator_traits<ft::Iterator>::difference_type			difference_type;
			typedef typename ft::iterator_traits<ft::Iterator>::pointer					pointer;
			typedef typename ft::iterator_traits<ft::Iterator>::reference				reference;
		*/
		typedef Iterator 												iterator_type;
			typedef typename iterator_traits<Iterator>::iterator_category	iterator_category;
			typedef typename iterator_traits<Iterator>::value_type			value_type;
			typedef typename iterator_traits<Iterator>::difference_type		difference_type;
			typedef typename iterator_traits<Iterator>::pointer				pointer;
			typedef typename iterator_traits<Iterator>::reference			reference;
		/*==============================================================================*/

		/*==============================================================================*/
		/*---------------------------------CONSTRUCTORS---------------------------------*/
		/*==============================================================================*/
		
		/*------------------------------Default constructor-----------------------------*/	
			reverse_iterator(/*ARG*/): _it(iterator_type())
			{
				return ;
			}
		/*------------------------------Default constructor-----------------------------*/	
			explicit reverse_iterator (iterator_type it) 
			{
				this->_it = it;
				return ;
			}
		/*-------------------------------Copy constructor-----------------------------*/
			template <class IteratorCopy>
			reverse_iterator (const reverse_iterator<IteratorCopy>& rev_it)
			{
				this->_it = rev_it.base();
			}
		/*==============================================================================*/
		/*----------------------------------DESTRUCTOR----------------------------------*/
		/*==============================================================================*/
			~reverse_iterator( void )
			{
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------OPERATOR =----------------------------------*/
		/*==============================================================================*/
			template<class OtherIteratorType>
			reverse_iterator & operator=(const reverse_iterator<OtherIteratorType>& rhs)
			{
				if (this->_it != rhs.base())
					this->_it = rhs.base();
				return (*this);
			}
		/*==============================================================================*/
		/*-------------------------------------BASE-------------------------------------*/
		/*==============================================================================*/
			iterator_type base() const
			{
				return (this->_it);
			}

			reference operator*() const
			{
				iterator_type temp;
				temp = this->base();
				--temp;
				return (*temp);
			}
			reverse_iterator operator+ (difference_type n) const
			{
				reverse_iterator temp;
				temp = *this;
				temp._it = temp._it - n;
				return (temp);
			}
			reverse_iterator& operator++()
			{
				this->_it = this->_it - 1;
				return (*this);
			}
			reverse_iterator  operator++(int)
			{
				reverse_iterator temp;
				temp = *this;
				this->_it = this->_it - 1;
				return (temp);
			}
			reverse_iterator& operator+= (difference_type n)
			{
				this->_it = this->_it - n;
				return (*this);
			}
			/*Operateur à mettre en commentaire avant le push final*/
			difference_type operator-(const reverse_iterator<Iterator>& rhs)
			{
				difference_type distance;

				distance = rhs.base() - this->_it;
				return (distance);
			}
			reverse_iterator operator- (difference_type n) const
			{
				reverse_iterator temp;
				temp = *this;
				temp._it = temp._it + n;
				return (temp);
			}
			reverse_iterator& operator--()
			{
				this->_it = this->_it + 1;
				return (*this);
			}
			reverse_iterator  operator--(int)
			{
				reverse_iterator temp;
				temp = *this;
				this->_it = this->_it + 1;
				return (temp);
			}
			reverse_iterator& operator-= (difference_type n)
			{
				this->_it = this->_it + n;
				return (*this);
			}
			pointer operator->() const
			{
				iterator_type temp;
				temp = this->base();
				--temp;
				return &(*temp); // Pas sûr que ce soit la meilleure méthode
			}
			reference operator[] (difference_type n) const
			{
				return *(*this + n);
			}

		private:
			iterator_type _it;

	};

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
/*PAS >=*/

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
	}
}

#endif