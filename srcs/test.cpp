# include "vector.hpp"
# include "map.hpp"
# include <vector>
# include <string>
# include <limits>

#include "containers_test/srcs/vector/common.hpp"

/*#ifndef STD
# define NAMESPACE ft
#else
# define NAMESPACE std
#endif
error: no match for ‘operator+’ (operand types are ‘int’ and ‘ft::vector<int>::reverse_iterator {aka ft::reverse_iterator<ft::random_access_iterator<int> >}’)
*/
/*int main(void)
{
	ft::map<int, int> test;
	return (0);
}*/

/*int main ()
{
	ft::pair<int,char> foo (10,'z');
	ft::pair<int,char> bar (90,'a');
	
	if (foo==bar) 
		std::cout << "foo and bar are equal\n";
	if (foo!=bar)
		std::cout << "foo and bar are not equal\n";
	if (foo< bar)
		std::cout << "foo is less than bar\n";
	if (foo> bar)
		std::cout << "foo is greater than bar\n";
	if (foo<=bar)
		std::cout << "foo is less than or equal to bar\n";
	if (foo>=bar)
		std::cout << "foo is greater than or equal to bar\n";

  return 0;
}
*/

int main () {
  std::pair <int,int> foo;
  std::pair <int,int> bar;

  foo = std::make_pair (10,20);
  bar = std::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

  std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
  std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

  return 0;
}