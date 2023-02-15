# include "vector.hpp"
# include <vector>

# include <limits>


int main(void)
{
	ft::vector<bool> boolv;
	ft::vector<bool> boolv2(100, 0);
	ft::vector<char> charv;
	ft::vector<char> charv2(100, 0);
	ft::vector<wchar_t> wchar_tv;
	ft::vector<wchar_t> wchar_tv2(100, 0);
	ft::vector<signed char> signed_charv;
	ft::vector<signed char> signed_charv2(100, 0);
	ft::vector<short int> short_intv;
	ft::vector<short int> short_intv2(100, 0);
	ft::vector<int> intv;
	ft::vector<int> intv2(5, 0);
	ft::vector<long int> long_intv;
	ft::vector<long int> long_intv2(100, 0);
	ft::vector<unsigned char> unsigned_charv;
	ft::vector<unsigned char> unsigned_charv2(100, 0);
	ft::vector<unsigned short int> unsigned_short_intv;
	ft::vector<unsigned short int> unsigned_short_intv2(100, 0);
	ft::vector<unsigned int> unsigned_intv;
	ft::vector<unsigned int> unsigned_intv2(100, 0);
	ft::vector<unsigned long int> unsigned_long_intv;
	ft::vector<unsigned long int> unsigned_long_intv2(100, 0);

	ft::vector<int>::iterator it;
	ft::vector<int>::iterator it2;
	std::vector<int>::iterator it3;
	std::vector<int>::iterator it4;

	std::vector<int> intv3;
	std::vector<int> intv4(5, 0);

	intv.push_back(1);
	intv.push_back(2);
//	it = intv.begin();
//	it2 = intv2.begin();
	intv2.swap(intv);
	it = intv.begin();
	it2 = intv2.begin();
	while (it != intv.end())
	{
		std::cout << "it === " << *it << std::endl;
		it++;
	}
	std::cout << "=======================================" << std::endl;
	while (it2 != intv2.end())
	{
		std::cout << "it2 === " << *it2 << std::endl;
		it2++;
	}
	return (0);
}