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
	ft::vector<int> intv2(100, 0);
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
	intv.push_back(10);
	it = intv.begin();
	//while (it != intv.end())
	//{
		if (it == intv.end())
			std::cout << RED << "Error" << NORMAL << std::endl;
		std::cout << *it << std::endl;
		it++;
	//}

	return (0);
}