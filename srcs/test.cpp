/*# include "vector.hpp"
# include "map.hpp"
# include "ran"*/
# include "utils.hpp"
# include <vector>
# include <string>
# include <limits>
# include <list>

#include "containers_test/srcs/vector/common.hpp"
/*template <class Iterator1, class Iterator2>
bool operator<(const Iterator1& lhs, const Iterator2& rhs)
{
    return (*lhs < *rhs);
}*/


int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::list<int> lst;
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(6);

    std::vector<int>::iterator vec_it = vec.begin();
    std::list<int>::iterator lst_it = lst.begin();

    if (vec_it < lst_it)
    {
        std::cout << "Vector value: " << *vec_it << " is less than List value: " << *lst_it << std::endl;
    }
    else
    {
        std::cout << "Vector value: " << *vec_it << " is not less than List value: " << *lst_it << std::endl;
    }

    return 0;
}

