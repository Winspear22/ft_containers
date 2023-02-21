# include "vector.hpp"
# include <vector>
# include <string>
# include <limits>

#include "containers_test/srcs/vector/common.hpp"

#define TESTED_TYPE int

/*int		main(void)
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
*/

/*void	is_empty(ft::vector<TESTED_TYPE> const &vct)
{
	std::cout << "is_empty: " << vct.empty() << std::endl;
}

int		main(void)
{
	const int start_size = 7;
	ft::vector<TESTED_TYPE> vct(start_size, 20);
	ft::vector<TESTED_TYPE> vct2;
	ft::vector<TESTED_TYPE>::iterator it = vct.begin();

	for (int i = 2; i < start_size; ++i)
		it[i] = (start_size - i) * 3;
	printSize(vct, true);

	vct.resize(10, 42);
	printSize(vct, true);

	vct.resize(18, 43);
	printSize(vct, true);
	vct.resize(10);
	printSize(vct, true);
	vct.resize(23, 44);
	printSize(vct, true);
	vct.resize(5);
	printSize(vct, true);
	vct.reserve(5);
	vct.reserve(3);
	printSize(vct, true);
	vct.resize(87);
	vct.resize(5);
	printSize(vct, true);

	is_empty(vct2);
	vct2 = vct;
	is_empty(vct2);
	vct.reserve(vct.capacity() + 1);
	printSize(vct, true);
	printSize(vct2, true);

	vct2.resize(0);
	is_empty(vct2);
	printSize(vct2, true);
	return (0);
}*/

int main(void)
{
	ft::vector<int> vct;
	ft::vector<int>::iterator it;
	ft::vector<int>::iterator it2;

	int i;
	
	i = 0;

	while (i < 20)
	{
		vct.push_back(i);
		i++;
	}
	it = vct.begin() + 10;
	it2 = vct.begin();
	std::cout << BGREEN << " size === " << BWHITE << vct.size() << NORMAL << std::endl;
	vct.insert(it, 11);
	std::cout << BGREEN << " size === " << BWHITE << vct.size() << NORMAL << std::endl;
	i = 0;
	while (i < 19)
	{
		std::cout << BBLUE << " content === " << BWHITE << *it2 << NORMAL << std::endl;
		it2++;
		i++;
	}

	return (0);
}

