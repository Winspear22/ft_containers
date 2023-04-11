#ifndef MAKE_PAIR_HPP
# define MAKE_PAIR_HPP

# include "utils.hpp"

namespace ft
{
template< class T1, class T2 >
ft::pair<T1, T2> make_pair( T1 t, T2 u )
{
    ft::pair<T1, T2> new_pair(t, u);
    return (new_pair);
};
}

#endif