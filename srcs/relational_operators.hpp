#ifndef RELATIONAL_OPERATOR_HPP
# define RELATIONAL_OPERATOR_HPP

# include "utils.hpp"
//# include "vector.hpp"
namespace ft
{
template <class T, class Allocator>
class vector;

template<class T, class Allocator > 
bool operator==( const ft::vector<T, Allocator> & lhs, const ft::vector<T, Allocator> & rhs )
{
	unsigned int i;

	i = 0;
	if (lhs.size() == rhs.size())
	{
		while (i < lhs.size())
		{
			if (lhs[i] != rhs[i])
				return (false);
			i++;
		}
	}
	else
		return (false);
	return (true);
}

template<class T, class Allocator >
bool operator!=( const ft::vector<T, Allocator> & lhs, const ft::vector<T, Allocator> & rhs )
{
	return (!(lhs == rhs));
}

template<class T, class Allocator >
bool operator<( const ft::vector<T, Allocator> & lhs, const ft::vector<T, Allocator> & rhs )
{
	typename ft::vector<T, Allocator>::const_iterator rhs_begin;
	typename ft::vector<T, Allocator>::const_iterator lhs_begin;

	rhs_begin = rhs.begin();
	lhs_begin = lhs.begin();
	while ((rhs_begin != rhs.end()) && (lhs_begin != lhs.end()))
	{	
		if (*rhs_begin != *lhs_begin)
			break ;
		rhs_begin++;
		lhs_begin++;
	}
	if (lhs_begin == lhs.end())
	{
	if (rhs_begin != rhs.end())
			return (true);
		else
			return (false);
	}
	if (rhs_begin == rhs.end())
		return (false);
	return (*lhs_begin < *rhs_begin);
}

template<class T, class Allocator >
bool operator<=( const ft::vector<T, Allocator> & lhs, const ft::vector<T, Allocator> & rhs ) 
{
	return (!(rhs < lhs));
}

template<class T, class Allocator >
bool operator>( const ft::vector<T, Allocator> & lhs, const ft::vector<T, Allocator> & rhs ) 
{
	return (rhs < lhs);
}

template<class T, class Allocator >
bool operator>=( const ft::vector<T, Allocator> & lhs, const ft::vector<T, Allocator> & rhs ) 
{
	return (!(lhs < rhs));
}
}

/*namespace ft {

template <class T, class Allocator>
class vector;

template <class T, class Allocator>
bool operator==(const ft::vector<T, Allocator>& lhs, const ft::vector<T, Allocator>& rhs) 
{
    // Comparer les tailles et les éléments
		unsigned int i;

		i = 0;
		if (lhs.size() == rhs.size())
		{
			while (i < lhs.size())
			{
				if (lhs[i] != rhs[i])
					return (false);
				i++;
			}
		}
		else
			return (false);
		return (true);
    //return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin());
}

template <class T, class Allocator>
bool operator!=(const vector<T, Allocator>& lhs, const vector<T, Allocator>& rhs) 
{
	return (!(lhs == rhs));
	//return !(lhs == rhs);
}

template <class T, class Allocator>
bool operator<(const vector<T, Allocator>& lhs, const vector<T, Allocator>& rhs) 
{
		typename ft::vector<T, Allocator>::const_iterator rhs_begin;
		typename ft::vector<T, Allocator>::const_iterator lhs_begin;

		rhs_begin = rhs.begin();
		lhs_begin = lhs.begin();
		while ((rhs_begin != rhs.end()) && (lhs_begin != lhs.end()))
		{	
			if (*rhs_begin != *lhs_begin)
				break ;
			rhs_begin++;
			lhs_begin++;
		}
		if (lhs_begin == lhs.end())
		{
			if (rhs_begin != rhs.end())
				return (true);
			else
				return (false);
		}
		if (rhs_begin == rhs.end())
			return (false);
		return (*lhs_begin < *rhs_begin);
	//return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}

template <class T, class Allocator>
bool operator<=(const vector<T, Allocator>& lhs, const vector<T, Allocator>& rhs) 
{
	return (!(rhs < lhs));
	//return !(rhs < lhs);
}

template <class T, class Allocator>
bool operator>(const vector<T, Allocator>& lhs, const vector<T, Allocator>& rhs) 
{
	return (rhs < lhs);
	//return rhs < lhs;
}

template <class T, class Allocator>
bool operator>=(const vector<T, Allocator>& lhs, const vector<T, Allocator>& rhs) 
{
	return (!(lhs < rhs));
    //return !(lhs < rhs);
}

} // namespace ft*/

#endif