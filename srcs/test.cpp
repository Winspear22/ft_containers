# include "vector.hpp"
# include <vector>
# include <string>
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
	ft::vector<int>::iterator it3;
	ft::vector<int>::iterator it4;

//	std::vector<int> intv3;
//	std::vector<int> intv4(5, 0);

	intv.push_back(1);
	intv.push_back(2);
//	it = intv.begin();
//	it2 = intv2.begin();
	intv2.swap(intv);
	it = intv.begin();
	it2 = intv2.begin();
	it4 = it2;
	it3 = it4;
	it3 = it;
	ft::vector<std::string> intv5;
	ft::vector<std::string>::iterator intv5_i;

	intv5.push_back("popopopopo");
	intv5.push_back("mmp");
	intv5.push_back("azazazza");

	intv5_i = intv5.begin();

	while (it != intv.end())
	{
		std::cout << "it === " << *it << std::endl;
		it++;
	}
	std::cout << RED << "=======================================" << NORMAL << std::endl;
	while (it2 != intv2.end())
	{
		std::cout << "it2 === " << *it2 << std::endl;
		it2++;
	}
	std::cout << RED << "=======================================" << NORMAL << std::endl;
	while (it4 != intv2.end())
	{
		std::cout << "it4 === " << BGREEN << *it4 << NORMAL << std::endl;
		it4++;
	}
	std::cout << RED << "=======================================" << NORMAL << std::endl;
	while (it3 != intv.end())
	{
		std::cout << "it3 === " << BBLUE << *it3 << NORMAL << std::endl;
		it3++;
	}
	while(intv5_i != intv5.end())
	{
		std::cout << "intv5_i === " << BYELLOW << *intv5_i << NORMAL << std::endl;
		intv5_i++;	
	}
	return (0);
}