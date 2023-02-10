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

	boolv.reserve(5000);
	boolv2.reserve(5000);
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
	ft::vector<bool>vv1(boolv2);
	ft::vector<char>vv2(charv2);
	ft::vector<wchar_t>vv3(wchar_tv2);
	ft::vector<signed char>vv4(signed_charv2);
	ft::vector<short int>vv5(short_intv2);
	ft::vector<int>vv6(intv2);
	ft::vector<long int>vv7(long_intv2);
	ft::vector<unsigned char>vv8(unsigned_charv2);
	ft::vector<unsigned short int>vv9(unsigned_short_intv2);
	ft::vector<unsigned int>vv10(unsigned_intv2);
	ft::vector<unsigned long int>vv11(unsigned_long_intv2);

/*	std::cout << "bool size : " << boolv2.size() << std::endl;
	std::cout << "bool capacity : " << boolv2.capacity() << std::endl;
	std::cout << "char size : " << charv2.size() << std::endl;
	std::cout << "char capacity : " << charv2.capacity() << std::endl;
	std::cout << "wchar size : " << wchar_tv2.size() << std::endl;
	std::cout << "wchar capacity : " << wchar_tv2.capacity() << std::endl;
	std::cout << "signed_char size : " << signed_charv2.size() << std::endl;
	std::cout << "signed_char capacity : " << signed_charv2.capacity() << std::endl;
	std::cout << "short int size : " << short_intv2.size() << std::endl;
	std::cout << "short int capacity : " << short_intv2.capacity() << std::endl;
	std::cout << "int size : " << intv2.size() << std::endl;
	std::cout << "int capacity : " << intv2.capacity() << std::endl;
	std::cout << "long int size : " << long_intv2.size() << std::endl;
	std::cout << "long int capacity : " << long_intv2.capacity() << std::endl;
	std::cout << "unsigned char size : " << unsigned_charv2.size() << std::endl;
	std::cout << "unsigned char capacity : " << unsigned_charv2.capacity() << std::endl;
	std::cout << "unsigned short int size : " << unsigned_short_intv2.size() << std::endl;
	std::cout << "unsigned short int capacity : " << unsigned_short_intv2.capacity() << std::endl;
	std::cout << "unsigned int size : " << unsigned_intv2.size() << std::endl;
	std::cout << "unsigned int capacity : " << unsigned_intv2.capacity() << std::endl;
	std::cout << "unsigned long int size : " << unsigned_long_intv2.size() << std::endl;
	std::cout << "unsigned long int capacity : " << unsigned_long_intv2.capacity() << std::endl;
	*/
	std::cout << "bool size : " << vv1.size() << std::endl;
	std::cout << "bool capacity : " << vv1.capacity() << std::endl;
	std::cout << "char size : " << vv2.size() << std::endl;
	std::cout << "char capacity : " << vv2.capacity() << std::endl;
	std::cout << "wchar size : " << vv3.size() << std::endl;
	std::cout << "wchar capacity : " << vv3.capacity() << std::endl;
	std::cout << "signed_char size : " << vv4.size() << std::endl;
	std::cout << "signed_char capacity : " << vv4.capacity() << std::endl;
	std::cout << "short int size : " << vv5.size() << std::endl;
	std::cout << "short int capacity : " << vv5.capacity() << std::endl;
	std::cout << "int size : " << vv6.size() << std::endl;
	std::cout << "int capacity : " << vv6.capacity() << std::endl;
	std::cout << "long int size : " << vv7.size() << std::endl;
	std::cout << "long int capacity : " << vv7.capacity() << std::endl;
	std::cout << "unsigned char size : " << vv8.size() << std::endl;
	std::cout << "unsigned char capacity : " << vv8.capacity() << std::endl;
	std::cout << "unsigned short int size : " << vv9.size() << std::endl;
	std::cout << "unsigned short int capacity : " << vv9.capacity() << std::endl;
	std::cout << "unsigned int size : " << vv10.size() << std::endl;
	std::cout << "unsigned int capacity : " << vv10.capacity() << std::endl;
	std::cout << "unsigned long int size : " << vv11.size() << std::endl;
	std::cout << "unsigned long int capacity : " << vv11.capacity() << std::endl;
	
	boolv.shrink_to_fit();
	boolv2.shrink_to_fit();
	charv.shrink_to_fit();
	charv2.shrink_to_fit();
	wchar_tv.shrink_to_fit();
	wchar_tv2.shrink_to_fit();
	signed_charv.shrink_to_fit();
	signed_charv2.shrink_to_fit();
	short_intv.shrink_to_fit();
	short_intv2.shrink_to_fit();
	intv.shrink_to_fit();
	intv2.shrink_to_fit();
	long_intv.shrink_to_fit();
	long_intv2.shrink_to_fit();
	unsigned_charv.shrink_to_fit();
	unsigned_charv2.shrink_to_fit();
	unsigned_short_intv.shrink_to_fit();
 	unsigned_short_intv2.shrink_to_fit();
	unsigned_intv.shrink_to_fit();
	unsigned_intv2.shrink_to_fit();
	unsigned_long_intv.shrink_to_fit();
	unsigned_long_intv2.shrink_to_fit();
	vv1.shrink_to_fit();
	vv2.shrink_to_fit();
	vv3.shrink_to_fit();
	vv4.shrink_to_fit();
	vv5.shrink_to_fit();
	vv6.shrink_to_fit();
	vv7.shrink_to_fit();
	vv8.shrink_to_fit();
	vv9.shrink_to_fit();
	vv10.shrink_to_fit();
	vv11.shrink_to_fit();
	std::cout << "bool size : " << boolv2.size() << std::endl;
	std::cout << "bool capacity : " << boolv2.capacity() << std::endl;
	std::cout << "char size : " << charv2.size() << std::endl;
	std::cout << "char capacity : " << charv2.capacity() << std::endl;
	std::cout << "wchar size : " << wchar_tv2.size() << std::endl;
	std::cout << "wchar capacity : " << wchar_tv2.capacity() << std::endl;
	std::cout << "signed_char size : " << signed_charv2.size() << std::endl;
	std::cout << "signed_char capacity : " << signed_charv2.capacity() << std::endl;
	std::cout << "short int size : " << short_intv2.size() << std::endl;
	std::cout << "short int capacity : " << short_intv2.capacity() << std::endl;
	std::cout << "int size : " << intv2.size() << std::endl;
	std::cout << "int capacity : " << intv2.capacity() << std::endl;
	std::cout << "long int size : " << long_intv2.size() << std::endl;
	std::cout << "long int capacity : " << long_intv2.capacity() << std::endl;
	std::cout << "unsigned char size : " << unsigned_charv2.size() << std::endl;
	std::cout << "unsigned char capacity : " << unsigned_charv2.capacity() << std::endl;
	std::cout << "unsigned short int size : " << unsigned_short_intv2.size() << std::endl;
	std::cout << "unsigned short int capacity : " << unsigned_short_intv2.capacity() << std::endl;
	std::cout << "unsigned int size : " << unsigned_intv2.size() << std::endl;
	std::cout << "unsigned int capacity : " << unsigned_intv2.capacity() << std::endl;
	std::cout << "unsigned long int size : " << unsigned_long_intv2.size() << std::endl;
	std::cout << "unsigned long int capacity : " << unsigned_long_intv2.capacity() << std::endl;

	std::cout << "===============" << std::endl;
	std::cout << "bool size : " << vv1.size() << std::endl;
	std::cout << "bool capacity : " << vv1.capacity() << std::endl;
	std::cout << "char size : " << vv2.size() << std::endl;
	std::cout << "char capacity : " << vv2.capacity() << std::endl;
	std::cout << "wchar size : " << vv3.size() << std::endl;
	std::cout << "wchar capacity : " << vv3.capacity() << std::endl;
	std::cout << "signed_char size : " << vv4.size() << std::endl;
	std::cout << "signed_char capacity : " << vv4.capacity() << std::endl;
	std::cout << "short int size : " << vv5.size() << std::endl;
	std::cout << "short int capacity : " << vv5.capacity() << std::endl;
	std::cout << "int size : " << vv6.size() << std::endl;
	std::cout << "int capacity : " << vv6.capacity() << std::endl;
	std::cout << "long int size : " << vv7.size() << std::endl;
	std::cout << "long int capacity : " << vv7.capacity() << std::endl;
	std::cout << "unsigned char size : " << vv8.size() << std::endl;
	std::cout << "unsigned char capacity : " << vv8.capacity() << std::endl;
	std::cout << "unsigned short int size : " << vv9.size() << std::endl;
	std::cout << "unsigned short int capacity : " << vv9.capacity() << std::endl;
	std::cout << "unsigned int size : " << vv10.size() << std::endl;
	std::cout << "unsigned int capacity : " << vv10.capacity() << std::endl;
	std::cout << "unsigned long int size : " << vv11.size() << std::endl;
	std::cout << "unsigned long int capacity : " << vv11.capacity() << std::endl;

	std::cout << RED << "==========================" << NORMAL << std::endl;
	std::cout << RED << "==========================" << NORMAL << std::endl;
	std::cout << RED << "==========================" << NORMAL << std::endl;
	std::cout << RED << "==========================" << NORMAL << std::endl;

	boolv.resize(160, 42);
	boolv2.resize(160, 42);
	charv.resize(160, 42);
	charv2.resize(160, 42);
	wchar_tv.resize(160, 42);
	wchar_tv2.resize(160, 42);
	signed_charv.resize(160, 42);
	signed_charv2.resize(160, 42);
	short_intv.resize(160, 42);
	short_intv2.resize(160, 42);
	intv.resize(160, 42);
	intv2.resize(160, 42);
	long_intv.resize(160, 42);
	long_intv2.resize(160, 42);
	unsigned_charv.resize(160, 42);
	unsigned_charv2.resize(160, 42);
	unsigned_short_intv.resize(160, 42);
 	unsigned_short_intv2.resize(160, 42);
	unsigned_intv.resize(160, 42);
	unsigned_intv2.resize(160, 42);
	unsigned_long_intv.resize(160, 42);
	unsigned_long_intv2.resize(160, 42);
	vv1.resize(160, 42);
	vv2.resize(160, 42);
	vv3.resize(160, 42);
	vv4.resize(160, 42);
	vv5.resize(160, 42);
	vv6.resize(160, 42);
	vv7.resize(160, 42);
	vv8.resize(160, 42);
	vv9.resize(160, 42);
	vv10.resize(160, 42);
	vv11.resize(160, 42);

		std::cout << "bool size : " << boolv2.size() << std::endl;
	std::cout << "bool capacity : " << boolv2.capacity() << std::endl;
	std::cout << "char size : " << charv2.size() << std::endl;
	std::cout << "char capacity : " << charv2.capacity() << std::endl;
	std::cout << "wchar size : " << wchar_tv2.size() << std::endl;
	std::cout << "wchar capacity : " << wchar_tv2.capacity() << std::endl;
	std::cout << "signed_char size : " << signed_charv2.size() << std::endl;
	std::cout << "signed_char capacity : " << signed_charv2.capacity() << std::endl;
	std::cout << "short int size : " << short_intv2.size() << std::endl;
	std::cout << "short int capacity : " << short_intv2.capacity() << std::endl;
	std::cout << "int size : " << intv2.size() << std::endl;
	std::cout << "int capacity : " << intv2.capacity() << std::endl;
	std::cout << "long int size : " << long_intv2.size() << std::endl;
	std::cout << "long int capacity : " << long_intv2.capacity() << std::endl;
	std::cout << "unsigned char size : " << unsigned_charv2.size() << std::endl;
	std::cout << "unsigned char capacity : " << unsigned_charv2.capacity() << std::endl;
	std::cout << "unsigned short int size : " << unsigned_short_intv2.size() << std::endl;
	std::cout << "unsigned short int capacity : " << unsigned_short_intv2.capacity() << std::endl;
	std::cout << "unsigned int size : " << unsigned_intv2.size() << std::endl;
	std::cout << "unsigned int capacity : " << unsigned_intv2.capacity() << std::endl;
	std::cout << "unsigned long int size : " << unsigned_long_intv2.size() << std::endl;
	std::cout << "unsigned long int capacity : " << unsigned_long_intv2.capacity() << std::endl;

	std::cout << "===============" << std::endl;
	std::cout << "bool size : " << vv1.size() << std::endl;
	std::cout << "bool capacity : " << vv1.capacity() << std::endl;
	std::cout << "char size : " << vv2.size() << std::endl;
	std::cout << "char capacity : " << vv2.capacity() << std::endl;
	std::cout << "wchar size : " << vv3.size() << std::endl;
	std::cout << "wchar capacity : " << vv3.capacity() << std::endl;
	std::cout << "signed_char size : " << vv4.size() << std::endl;
	std::cout << "signed_char capacity : " << vv4.capacity() << std::endl;
	std::cout << "short int size : " << vv5.size() << std::endl;
	std::cout << "short int capacity : " << vv5.capacity() << std::endl;
	std::cout << "int size : " << vv6.size() << std::endl;
	std::cout << "int capacity : " << vv6.capacity() << std::endl;
	std::cout << "long int size : " << vv7.size() << std::endl;
	std::cout << "long int capacity : " << vv7.capacity() << std::endl;
	std::cout << "unsigned char size : " << vv8.size() << std::endl;
	std::cout << "unsigned char capacity : " << vv8.capacity() << std::endl;
	std::cout << "unsigned short int size : " << vv9.size() << std::endl;
	std::cout << "unsigned short int capacity : " << vv9.capacity() << std::endl;
	std::cout << "unsigned int size : " << vv10.size() << std::endl;
	std::cout << "unsigned int capacity : " << vv10.capacity() << std::endl;
	std::cout << "unsigned long int size : " << vv11.size() << std::endl;
	std::cout << "unsigned long int capacity : " << vv11.capacity() << std::endl;
	return (0);
}
/*

int main( void )
{
	ft::vector<int> toto(100, 0);
	std::cout << "toto size : " << toto.size() << std::endl;
	std::cout << "toto capacity : " << toto.capacity() << std::endl;
	toto.reserve(1000);
	std::cout << "toto size : " << toto.size() << std::endl;
	std::cout << "toto capacity : " << toto.capacity() << std::endl;
	toto.shrink_to_fit();
	std::cout << "toto size : " << toto.size() << std::endl;
	std::cout << "toto capacity : " << toto.capacity() << std::endl;


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
	std::cout << "bool size : " << boolv.size() << std::endl;
	std::cout << "bool capacity : " << boolv.capacity() << std::endl;
	std::cout << "char size : " << charv.size() << std::endl;
	std::cout << "char capacity : " << charv.capacity() << std::endl;
	std::cout << "wchar size : " << wchar_tv.size() << std::endl;
	std::cout << "wchar capacity : " << wchar_tv.capacity() << std::endl;
	std::cout << "signed_char size : " << signed_charv.size() << std::endl;
	std::cout << "signed_char capacity : " << signed_charv.capacity() << std::endl;
	std::cout << "short int size : " << short_intv.size() << std::endl;
	std::cout << "short int capacity : " << short_intv.capacity() << std::endl;
	std::cout << "int size : " << intv.size() << std::endl;
	std::cout << "int capacity : " << intv.capacity() << std::endl;
	std::cout << "long int size : " << long_intv.size() << std::endl;
	std::cout << "long int capacity : " << long_intv.capacity() << std::endl;
	std::cout << "unsigned char size : " << unsigned_charv.size() << std::endl;
	std::cout << "unsigned char capacity : " << unsigned_charv.capacity() << std::endl;
	std::cout << "unsigned short int size : " << unsigned_short_intv.size() << std::endl;
	std::cout << "unsigned short int capacity : " << unsigned_short_intv.capacity() << std::endl;
	std::cout << "unsigned int size : " << unsigned_intv.size() << std::endl;
	std::cout << "unsigned int capacity : " << unsigned_intv.capacity() << std::endl;
	std::cout << "unsigned long int size : " << unsigned_long_intv.size() << std::endl;
	std::cout << "unsigned long int capacity : " << unsigned_long_intv.capacity() << std::endl;
	boolv.shrink_to_fit();
	//boolv2.shrink_to_fit();
	charv.shrink_to_fit();
	charv2.shrink_to_fit();
	wchar_tv.shrink_to_fit();
	wchar_tv2.shrink_to_fit();
	signed_charv.shrink_to_fit();
	signed_charv2.shrink_to_fit();
	short_intv.shrink_to_fit();
	short_intv2.shrink_to_fit();
	intv.shrink_to_fit();
	intv2.shrink_to_fit();
	long_intv.shrink_to_fit();
	long_intv2.shrink_to_fit();
	unsigned_charv.shrink_to_fit();
	unsigned_charv2.shrink_to_fit();
	unsigned_short_intv.shrink_to_fit();
 	unsigned_short_intv2.shrink_to_fit();
	unsigned_intv.shrink_to_fit();
	unsigned_intv2.shrink_to_fit();
	unsigned_long_intv.shrink_to_fit();
	unsigned_long_intv2.shrink_to_fit();
	std::cout << "bool size : " << boolv.size() << std::endl;
	std::cout << "bool capacity : " << boolv.capacity() << std::endl;
	std::cout << "char size : " << charv.size() << std::endl;
	std::cout << "char capacity : " << charv.capacity() << std::endl;
	std::cout << "wchar size : " << wchar_tv.size() << std::endl;
	std::cout << "wchar capacity : " << wchar_tv.capacity() << std::endl;
	std::cout << "signed_char size : " << signed_charv.size() << std::endl;
	std::cout << "signed_char capacity : " << signed_charv.capacity() << std::endl;
	std::cout << "short int size : " << short_intv.size() << std::endl;
	std::cout << "short int capacity : " << short_intv.capacity() << std::endl;
	std::cout << "int size : " << intv.size() << std::endl;
	std::cout << "int capacity : " << intv.capacity() << std::endl;
	std::cout << "long int size : " << long_intv.size() << std::endl;
	std::cout << "long int capacity : " << long_intv.capacity() << std::endl;
	std::cout << "unsigned char size : " << unsigned_charv.size() << std::endl;
	std::cout << "unsigned char capacity : " << unsigned_charv.capacity() << std::endl;
	std::cout << "unsigned short int size : " << unsigned_short_intv.size() << std::endl;
	std::cout << "unsigned short int capacity : " << unsigned_short_intv.capacity() << std::endl;
	std::cout << "unsigned int size : " << unsigned_intv.size() << std::endl;
	std::cout << "unsigned int capacity : " << unsigned_intv.capacity() << std::endl;
	std::cout << "unsigned long int size : " << unsigned_long_intv.size() << std::endl;
	std::cout << "unsigned long int capacity : " << unsigned_long_intv.capacity() << std::endl;
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

	return (0);
}
*/