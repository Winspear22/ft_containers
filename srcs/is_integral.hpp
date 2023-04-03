#ifndef IS_INTEGRAL
# define IS_INTEGRAL

# include "utils.hpp"

namespace ft
{
	template <class T, T v>
	struct integral_constant
	{
		static const T value = v;
		typedef T value_type;
		typedef integral_constant<T, v> type;
	};
	
	typedef integral_constant<bool, true> true_type;
	typedef integral_constant<bool, false> false_type;

	template <typename> struct check_if_integral: false_type 
	{
	};

	template <>
	struct check_if_integral<bool>: public true_type 
	{
	};

	template <>
	struct check_if_integral<char>: public true_type 
	{
	};

	template <>
	struct check_if_integral<wchar_t>: public true_type 
	{
	};

	template <>
	struct check_if_integral<signed char>: public true_type 
	{
	};

	template <>
	struct check_if_integral<short int>:	true_type 
	{
	};
	
	template <>
	struct check_if_integral<int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<long int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<unsigned char>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<unsigned short int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<unsigned int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<unsigned long int>:	true_type 
	{
	};
	
	template <>
	struct check_if_integral<const bool>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const char>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const wchar_t>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const signed char>:	true_type 
	{
	};
	
	template <>
	struct check_if_integral<const short int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const long int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const unsigned char>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const unsigned short int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const unsigned int>: public true_type 
	{
	};
	
	template <>
	struct check_if_integral<const unsigned long int>: public true_type 
	{
	};
	
	template <class T> 
	struct is_integral: check_if_integral<T> 
	{
	};
}

#endif