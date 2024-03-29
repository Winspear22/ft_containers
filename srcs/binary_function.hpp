#ifndef BINARY_FUNCTION_HPP
# define BINARY_FUNCTION_HPP

# include "utils.hpp"

namespace ft
{
template <class Arg1, class Arg2, class Result>
struct binary_function
{
    typedef Arg1 first_argument_type;
    typedef Arg2 second_argument_type;
    typedef Result result_type;
};
}


#endif