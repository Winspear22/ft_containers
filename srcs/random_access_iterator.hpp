#ifndef RANDOM_ACCESS_ITERATOR_HPP
# define RANDOM_ACCESS_ITERATOR_HPP

# include "utils.hpp"
# include "random_access_iterator_tag.hpp"

namespace ft
{
	template <class Iter>
	class random_access_iterator : ft::iterator<ft::random_access_iterator_tag, Iter> 
	{
	};
	
}

#endif