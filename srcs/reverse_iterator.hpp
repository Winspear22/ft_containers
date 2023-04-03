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
			/*-----------*/
			iterator_type base() const
			{
				return (this->_it);
			}
			template<class C>
			reverse_iterator& operator=(const reverse_iterator<C>& src)
			{
				this->_it = src.base();
				return *this;
			}
			reference operator*() const
			{
				iterator_type tmp = _it;
				return (*--tmp);
			}
			/*reverse_iterator operator+ (difference_type n) const
			{

			}
			reverse_iterator& operator++()
			{

			}
			reverse_iterator  operator++(int)
			{

			}
			reverse_iterator& operator+= (difference_type n)
			{

			}*/
			reverse_iterator operator+(difference_type n) const 
			{
				reverse_iterator	tmp (*this);
				tmp._it -= n;
				return (tmp);
			}

			reverse_iterator &operator++()
			{
				--this->_it;
				return (*this);
			}
			reverse_iterator operator++(int)
			{
				reverse_iterator tmp = *this;
				++(*this);
				return (tmp);
			}
			reverse_iterator &operator+=(difference_type n)
			{
				this->_it -= n;
				return (*this);
			}
			difference_type operator-(const reverse_iterator<Iterator>& rhs)
			{
				return (rhs.base() - this->_it);
			}
			reverse_iterator operator-(difference_type n) const 
			{
				reverse_iterator	tmp(*this);
				tmp._it += n;
				return (tmp);
			}
			reverse_iterator &operator--()
			{
				++this->_it;
				return (*this);
			}
			reverse_iterator operator--(int)
			{
				reverse_iterator tmp = *this;
				--(*this);
				return (tmp);
			}
			reverse_iterator &operator-=(difference_type n)
			{
				this->_it += n;
				return (*this);
			}
			pointer operator->() const
			{
				return &(operator*());
			}
			reference operator[] (difference_type n) const
			{
				return *(base() - n - 1);
			}

		private:
			iterator_type _it;

	};
	template <class Iterator>
	bool operator== (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
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
	}

/*	template <class InputIterator>
	typename ft::iterator_traits<InputIterator>::difference_type	distance(InputIterator first, InputIterator last)
	{
		typename ft::iterator_traits<InputIterator>::difference_type i = 0;
		for (; first != last; ++first, i++);
		return (i);
	}*/
}

#endif