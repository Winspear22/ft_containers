#ifndef SWAP_HPP
# define SWAP_HPP

# include "utils.hpp"
# include "vector.hpp"

namespace ft
{
	template<typename T>
	void swap(T &a, T &b)
	{
		T c(a);

		//c = a;
		a = b;
		b = c;
	}
	
}

#endif