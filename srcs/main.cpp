#include <vector>
#include <list>
#include <iterator>
# include "vector.hpp"

int main() {
    ft::vector<int> vec(3, 42);
    ft::vector<int> lst(3, 42);

    ft::vector<int>::iterator vec_it = vec.begin();
    ft::vector<int>::iterator lst_it = lst.begin();

    ft::reverse_iterator<ft::vector<int>::iterator> vec_rev_it(vec_it);
    ft::reverse_iterator<ft::vector<int>::iterator> lst_rev_it(lst_it);

    // Affectation entre des reverse_iterator de types d'itérateurs compatibles
    lst_rev_it = vec_rev_it;

    return 0;
}