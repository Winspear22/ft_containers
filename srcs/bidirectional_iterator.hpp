#ifndef BIDIRECTIONAL_ITERATOR_HPP
# define BIDIRECTIONAL_ITERATOR_HPP

# include "random_access_iterator_tag.hpp"
# include "utils.hpp"

namespace ft
{
    template <class Iter>
    class bidirectional_iterator: public ft::iterator<ft::bidirectional_iterator_tag, Iter>
    {

    };
}

#endif