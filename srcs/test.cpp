# include "vector.hpp"
# include <vector>

# include <limits>


/*int main( void )
{
	try
	{
		ft::vector<bool> boolv2((std::numeric_limits<size_t>::max() / sizeof(int)), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		ft::vector<bool> boolv2((std::numeric_limits<size_t>::max() / sizeof(int)), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
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
	return (0);
}*/


int main( void )
{
	ft::vector<bool> boolv;
	std::cout << "size of sizet / int === " << std::numeric_limits<size_t>::max() / sizeof(int) << std::endl;
	std::cout << "size of sizet === " << std::numeric_limits<size_t>::max() << std::endl;
	std::cout << "size of char === " << std::numeric_limits<char>::max() << std::endl;
	std::cout << "size of wchar === " << std::numeric_limits<wchar_t>::max() << std::endl;
	std::cout << "size of signed char === " << std::numeric_limits<signed char>::max() << std::endl;
	std::cout << "size of short int === " << std::numeric_limits<short int>::max() << std::endl;
	std::cout << "size of int === " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "size of long int === " << std::numeric_limits<long int>::max() << std::endl;
	std::cout << "size of unsigned char=== " << std::numeric_limits<unsigned char>::max() << std::endl;
	std::cout << "size of unsigned short iont === " << std::numeric_limits<unsigned short int>::max() << std::endl;
	std::cout << "size of  unsigned int === " << std::numeric_limits<unsigned int>::max() << std::endl;
	std::cout << "size of unsigned long int === " << std::numeric_limits<unsigned long int>::max() << std::endl;

	/*try
	{
		std::cout << RED << "BOOL" << std::endl;
		std::vector<bool> boolv2(std::numeric_limits<bool>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}*/
	try
	{
		std::cout << RED << "char" << std::endl;
		std::vector<char> charv2(std::numeric_limits<char>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "wchar_t" << std::endl;
		std::vector<wchar_t> charv2(std::numeric_limits<wchar_t>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "signed char" << std::endl;
		std::vector<signed char> charv2(std::numeric_limits<signed char>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "short int" << std::endl;
		std::vector<short int> charv2(std::numeric_limits<short int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "int" << std::endl;
		std::vector<int> charv2(std::numeric_limits<int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "long int" << std::endl;
		std::vector<long int> charv2(std::numeric_limits<long int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "unsigned char" << std::endl;
		std::vector<unsigned char> charv2(std::numeric_limits<unsigned char>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "unsigned short int" << std::endl;
		std::vector<unsigned short int> charv2(std::numeric_limits<unsigned short int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "unsigned int" << std::endl;
		std::vector<unsigned int> charv2(std::numeric_limits<unsigned int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "unsigned long int" << std::endl;
		std::vector<unsigned long int> charv2(std::numeric_limits<unsigned long int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "size_t" << std::endl;
		std::vector<size_t> charv2(std::numeric_limits<size_t>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << " =================================== " << std::endl;
	std::cout << " =================================== " << std::endl;
	std::cout << " =================================== " << std::endl;
	std::cout << " =================================== " << std::endl;
	std::cout << " =================================== " << std::endl;


	/*MINE*/
	try
	{
		std::cout << RED << "BOOL" << std::endl;
		ft::vector<bool> boolv2((std::numeric_limits<bool>::max()), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "char" << std::endl;
		ft::vector<char> charv2(std::numeric_limits<char>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "wchar_t" << std::endl;
		ft::vector<wchar_t> charv2(std::numeric_limits<wchar_t>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "signed char" << std::endl;
		ft::vector<signed char> charv2(std::numeric_limits<signed char>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "short int" << std::endl;
		ft::vector<short int> charv2(std::numeric_limits<short int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "int" << std::endl;
		ft::vector<int> charv2(std::numeric_limits<int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "long int" << std::endl;
		ft::vector<long int> charv2(std::numeric_limits<long int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "unsigned char" << std::endl;
		ft::vector<unsigned char> charv2(std::numeric_limits<unsigned char>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "unsigned short int" << std::endl;
		ft::vector<unsigned short int> charv2(std::numeric_limits<unsigned short int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "unsigned int" << std::endl;
		ft::vector<unsigned int> charv2(std::numeric_limits<unsigned int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "unsigned long int" << std::endl;
		ft::vector<unsigned long int> charv2(std::numeric_limits<unsigned long int>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << RED << "size_t" << std::endl;
		ft::vector<size_t> charv2(std::numeric_limits<size_t>::max(), 0);
	}
	catch(const std::exception& e)
	{
		std::cout << CYAN << "ERRRRRROOOOR" << NORMAL << std::endl;
		std::cerr << e.what() << '\n';
	}


	/*ft::vector<char> charv;
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

	std::cout << BRED << "=============================================" << NORMAL << std::endl;
	std::cout << BYELLOW << "      NORMAL CONSTRUCTOR RESERVE TEST" << NORMAL << std::endl;
	std::cout << BRED << "=============================================" << NORMAL << std::endl;
	
	std::cout << GREEN << "BOOL" << NORMAL << std::endl;
	std::cout << "\33[1;37mboolv \033[1;34msize : \033[1;37m " << boolv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mboolv \033[1;35mcapacity \033[1;37m: " << boolv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;34msize : \033[1;37m " << charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;35mcapacity \033[1;37m: " << charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "WCHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;34msize : \033[1;37m " << wchar_tv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;35mcapacity \033[1;37m: " << wchar_tv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;34msize : \033[1;37m " << signed_charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;35mcapacity \033[1;37m: " << signed_charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;34msize : \033[1;37m " << short_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;35mcapacity \033[1;37m: " << short_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;34msize : \033[1;37m " << intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;35mcapacity \033[1;37m: " << intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;34msize : \033[1;37m " << long_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;35mcapacity \033[1;37m: " << long_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "UNSIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;34msize : \033[1;37m " << unsigned_charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;35mcapacity \033[1;37m: " << unsigned_charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;34msize : \033[1;37m " << unsigned_short_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;35mcapacity \033[1;37m: " << unsigned_short_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;34msize : \033[1;37m " << unsigned_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;35mcapacity \033[1;37m: " << unsigned_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;34msize : \033[1;37m " << unsigned_long_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;35mcapacity \033[1;37m: " << unsigned_long_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << BRED << "=============================================" << NORMAL << std::endl;
	std::cout << BYELLOW << "        FILL CONSTRUCTOR RESERVE TEST" << NORMAL << std::endl;
	std::cout << BRED << "=============================================" << NORMAL << std::endl;

	std::cout << GREEN << "BOOL" << NORMAL << std::endl;
	//std::cout << "\33[1;37mboolv \033[1;34msize : \033[1;37m " << boolv2.size() << NORMAL << std::endl;
	//std::cout << "\33[1;37mboolv \033[1;35mcapacity \033[1;37m: " << boolv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;34msize : \033[1;37m " << charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;35mcapacity \033[1;37m: " << charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "WCHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;34msize : \033[1;37m " << wchar_tv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;35mcapacity \033[1;37m: " << wchar_tv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;34msize : \033[1;37m " << signed_charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;35mcapacity \033[1;37m: " << signed_charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;34msize : \033[1;37m " << short_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;35mcapacity \033[1;37m: " << short_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;34msize : \033[1;37m " << intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;35mcapacity \033[1;37m: " << intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;34msize : \033[1;37m " << long_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;35mcapacity \033[1;37m: " << long_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "UNSIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;34msize : \033[1;37m " << unsigned_charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;35mcapacity \033[1;37m: " << unsigned_charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;34msize : \033[1;37m " << unsigned_short_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;35mcapacity \033[1;37m: " << unsigned_short_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;34msize : \033[1;37m " << unsigned_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;35mcapacity \033[1;37m: " << unsigned_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;34msize : \033[1;37m " << unsigned_long_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;35mcapacity \033[1;37m: " << unsigned_long_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	boolv.reserve(5000);
	//boolv2.reserve(5000);
	charv.reserve(5000);
	charv2.reserve(5000);
	wchar_tv.reserve(5000);
	wchar_tv2.reserve(5000);
	signed_charv.reserve(5000);
	signed_charv2.reserve(5000);
	short_intv.reserve(5000);
	short_intv2.reserve(5000);
	intv.reserve(5000);
	intv2.reserve(5000);
	long_intv.reserve(5000);
	long_intv2.reserve(5000);
	unsigned_charv.reserve(5000);
	unsigned_charv2.reserve(5000);
	unsigned_short_intv.reserve(5000);
 	unsigned_short_intv2.reserve(5000);
	unsigned_intv.reserve(5000);
	unsigned_intv2.reserve(5000);
	unsigned_long_intv.reserve(5000);
	unsigned_long_intv2.reserve(5000);
	try
	{
		intv.reserve(4611686018427387904);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		intv.reserve(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BRED << "=============================================" << NORMAL << std::endl;
	std::cout << BYELLOW << "      NORMAL CONSTRUCTOR RESERVE TEST" << NORMAL << std::endl;
	std::cout << BRED << "=============================================" << NORMAL << std::endl;
	
	std::cout << GREEN << "BOOL" << NORMAL << std::endl;
	std::cout << "\33[1;37mboolv \033[1;34msize : \033[1;37m " << boolv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mboolv \033[1;35mcapacity \033[1;37m: " << boolv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;34msize : \033[1;37m " << charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;35mcapacity \033[1;37m: " << charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "WCHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;34msize : \033[1;37m " << wchar_tv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;35mcapacity \033[1;37m: " << wchar_tv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;34msize : \033[1;37m " << signed_charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;35mcapacity \033[1;37m: " << signed_charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;34msize : \033[1;37m " << short_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;35mcapacity \033[1;37m: " << short_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;34msize : \033[1;37m " << intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;35mcapacity \033[1;37m: " << intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;34msize : \033[1;37m " << long_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;35mcapacity \033[1;37m: " << long_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "UNSIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;34msize : \033[1;37m " << unsigned_charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;35mcapacity \033[1;37m: " << unsigned_charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;34msize : \033[1;37m " << unsigned_short_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;35mcapacity \033[1;37m: " << unsigned_short_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;34msize : \033[1;37m " << unsigned_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;35mcapacity \033[1;37m: " << unsigned_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;34msize : \033[1;37m " << unsigned_long_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;35mcapacity \033[1;37m: " << unsigned_long_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << BRED << "=============================================" << NORMAL << std::endl;
	std::cout << BYELLOW << "        FILL CONSTRUCTOR RESERVE TEST" << NORMAL << std::endl;
	std::cout << BRED << "=============================================" << NORMAL << std::endl;

	std::cout << GREEN << "BOOL" << NORMAL << std::endl;
	//std::cout << "\33[1;37mboolv \033[1;34msize : \033[1;37m " << boolv2.size() << NORMAL << std::endl;
//	std::cout << "\33[1;37mboolv \033[1;35mcapacity \033[1;37m: " << boolv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;34msize : \033[1;37m " << charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;35mcapacity \033[1;37m: " << charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "WCHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;34msize : \033[1;37m " << wchar_tv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;35mcapacity \033[1;37m: " << wchar_tv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;34msize : \033[1;37m " << signed_charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;35mcapacity \033[1;37m: " << signed_charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;34msize : \033[1;37m " << short_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;35mcapacity \033[1;37m: " << short_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;34msize : \033[1;37m " << intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;35mcapacity \033[1;37m: " << intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;34msize : \033[1;37m " << long_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;35mcapacity \033[1;37m: " << long_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "UNSIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;34msize : \033[1;37m " << unsigned_charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;35mcapacity \033[1;37m: " << unsigned_charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;34msize : \033[1;37m " << unsigned_short_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;35mcapacity \033[1;37m: " << unsigned_short_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;34msize : \033[1;37m " << unsigned_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;35mcapacity \033[1;37m: " << unsigned_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;34msize : \033[1;37m " << unsigned_long_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;35mcapacity \033[1;37m: " << unsigned_long_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
*/
   return (0);
}

/*int main( void )
{
	ft::vector<const bool> const_boolv;
	ft::vector<const bool> const_boolv2(100, 0);
	ft::vector<const char> const_charv;
	ft::vector<const char> const_charv2(100, 0);
	ft::vector<const wchar_t> const_wchar_tv;
	ft::vector<const wchar_t> const_wchar_tv2(100, 0);
	ft::vector<const signed char> const_signed_charv;
	ft::vector<const signed char> const_signed_charv2(100, 0);
	ft::vector<const short int> const_short_intv;
	ft::vector<const short int> const_short_intv2(100, 0);
	ft::vector<const int> const_intv;
	ft::vector<const int> const_intv2(100, 0);
	ft::vector<const long int> const_long_intv;
	ft::vector<const long int> const_long_intv2(100, 0);
	ft::vector<const unsigned char> const_unsigned_charv;
	ft::vector<const unsigned char> const_unsigned_charv2(100, 0);
	ft::vector<const unsigned short int> const_unsigned_short_intv;
	ft::vector<const unsigned short int> const_unsigned_short_intv2(100, 0);
	ft::vector<const unsigned int> const_unsigned_intv;
	ft::vector<const unsigned int> const_unsigned_intv2(100, 0);
	ft::vector<const unsigned long int> const_unsigned_long_intv;
	ft::vector<const unsigned long int> const_unsigned_long_intv2(100, 0);

std::cout << BRED << "=============================================" << NORMAL << std::endl;
	std::cout << BYELLOW << "      NORMAL CONSTRUCTOR RESERVE TEST" << NORMAL << std::endl;
	std::cout << BRED << "=============================================" << NORMAL << std::endl;
	
	std::cout << GREEN << "BOOL" << NORMAL << std::endl;
	std::cout << "\33[1;37mboolv \033[1;34msize : \033[1;37m " << const_boolv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mboolv \033[1;35mcapacity \033[1;37m: " << const_boolv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;34msize : \033[1;37m " << const_charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;35mcapacity \033[1;37m: " << const_charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "WCHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;34msize : \033[1;37m " << const_wchar_tv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;35mcapacity \033[1;37m: " << const_wchar_tv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;34msize : \033[1;37m " << const_signed_charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;35mcapacity \033[1;37m: " << const_signed_charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;34msize : \033[1;37m " << const_short_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;35mcapacity \033[1;37m: " << const_short_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;34msize : \033[1;37m " << const_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;35mcapacity \033[1;37m: " << const_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;34msize : \033[1;37m " << const_long_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;35mcapacity \033[1;37m: " << const_long_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "UNSIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;34msize : \033[1;37m " << const_unsigned_charv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;35mcapacity \033[1;37m: " << const_unsigned_charv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;34msize : \033[1;37m " << const_unsigned_short_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;35mcapacity \033[1;37m: " << const_unsigned_short_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;34msize : \033[1;37m " << const_unsigned_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;35mcapacity \033[1;37m: " << const_unsigned_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;34msize : \033[1;37m " << const_unsigned_long_intv.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;35mcapacity \033[1;37m: " << const_unsigned_long_intv.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << BRED << "=============================================" << NORMAL << std::endl;
	std::cout << BYELLOW << "        FILL CONSTRUCTOR RESERVE TEST" << NORMAL << std::endl;
	std::cout << BRED << "=============================================" << NORMAL << std::endl;

	std::cout << GREEN << "BOOL" << NORMAL << std::endl;
	std::cout << "\33[1;37mboolv \033[1;34msize : \033[1;37m " << const_boolv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mboolv \033[1;35mcapacity \033[1;37m: " << const_boolv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;34msize : \033[1;37m " << const_charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mcharv \033[1;35mcapacity \033[1;37m: " << const_charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "WCHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;34msize : \033[1;37m " << const_wchar_tv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mwcharv \033[1;35mcapacity \033[1;37m: " << const_wchar_tv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;34msize : \033[1;37m " << const_signed_charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37msigned charv \033[1;35mcapacity \033[1;37m: " << const_signed_charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;34msize : \033[1;37m " << const_short_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mshort_intv \033[1;35mcapacity \033[1;37m: " << const_short_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;34msize : \033[1;37m " << const_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mintv \033[1;35mcapacity \033[1;37m: " << const_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;34msize : \033[1;37m " << const_long_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37mlong_intv \033[1;35mcapacity \033[1;37m: " << const_long_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "UNSIGNED CHAR" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;34msize : \033[1;37m " << const_unsigned_charv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_charv \033[1;35mcapacity \033[1;37m: " << const_unsigned_charv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED SHORT INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;34msize : \033[1;37m " << const_unsigned_short_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_short_intv \033[1;35mcapacity \033[1;37m: " << const_unsigned_short_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;34msize : \033[1;37m " << const_unsigned_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_intv \033[1;35mcapacity \033[1;37m: " << const_unsigned_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;
	
	std::cout << GREEN << "UNSIGNED LONG INT" << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;34msize : \033[1;37m " << const_unsigned_long_intv2.size() << NORMAL << std::endl;
	std::cout << "\33[1;37munsigned_long_intv \033[1;35mcapacity \033[1;37m: " << const_unsigned_long_intv2.capacity() << NORMAL << std::endl;
	std::cout << std::endl;


	const_intv.reserve(100);
	const_intv2.reserve(10000);

	try
	{
		const_intv.reserve(4611686018427387904);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		const_intv.reserve(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "intv \033[1;35mcapacity \033[1;37m: " << const_intv.capacity() << std::endl;
	std::cout << "intv \033[1;34msize : \033[1;37m " << const_intv.size() << std::endl;

	std::cout << "intv2 \033[1;35mcapacity \033[1;37m: " << const_intv2.capacity() << std::endl;
	std::cout << "intv2 \033[1;34msize : \033[1;37m " << const_intv2.size() << std::endl;

	return (0);
}*/