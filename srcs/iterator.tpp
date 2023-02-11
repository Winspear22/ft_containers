#ifndef VECTOR_ITERATOR_TPP
# define VECTOR_ITERATOR_TPP

# include "utils.hpp"
# include "vector.tpp"

class vector;

namespace ft
{
	template <class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
	struct iterator
	{
		typedef Category	iterator_category;
		typedef T			value_type;
		typedef Distance	difference_type;
		typedef Pointer		pointer;
		typedef Reference	reference;
	};
}

#endif