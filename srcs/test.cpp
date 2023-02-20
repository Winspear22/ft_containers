# include "vector.hpp"
# include <vector>
# include <string>
# include <limits>

#include "containers_test/srcs/vector/common.hpp"

#define TESTED_TYPE int

int		main(void)
{
	ft::vector<TESTED_TYPE> vct(7);
	ft::vector<TESTED_TYPE> vct_two(4);
	ft::vector<TESTED_TYPE> vct_three;
	ft::vector<TESTED_TYPE> vct_four;

	for (unsigned long int i = 0; i < vct.size(); ++i)
		vct[i] = (vct.size() - i) * 3;
	for (unsigned long int i = 0; i < vct_two.size(); ++i)
		vct_two[i] = (vct_two.size() - i) * 5;
	printSize(vct);
	printSize(vct_two);

	vct_three.assign(10, 10);
	vct.assign(20, 20);
	vct_two.assign(2, 42);
	vct_four.assign(4, 21);

	std::cout << "\t### After assign(): ###" << std::endl;

	printSize(vct);
	printSize(vct_two);
	printSize(vct_three);
	printSize(vct_four);

	vct_four.assign(6, 84);
	printSize(vct_four);

	std::cout << "\t### assign() on enough capacity and low size: ###" << std::endl;

	vct.assign(5, 53);
	vct_two.assign(5, 10);

	printSize(vct);
	printSize(vct_two);

	return (0);
}

