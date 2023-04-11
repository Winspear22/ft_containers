#ifndef PAIR_HPP
# define PAIR_HPP

# include "utils.hpp"

# define SUCCESS true
# define FAILURE false

namespace ft
{
template <class T1, class T2>
struct pair
{
    public:
        /*==============================================================================*/
		/*----------------------------STD::ALLOCATOR ALIASES----------------------------*/
		/*==============================================================================*/
            typedef T1 first_type;
            typedef T2 second_type;
		/*==============================================================================*/
		/*---------------------------------CONSTRUCTORS---------------------------------*/
		/*==============================================================================*/

		/*------------------------------Default constructor-----------------------------*/	
			pair( void )
			{
				this->first = first_type();
				this->second = second_type();
				return ;
			}
		/*-------------------------------Copy constructor-------------------------------*/
			template<class U, class V> 
			pair(const pair<U,V>& pr)
			{
				this->first = pr.first;
				this->second = pr.second;
				return ;
			}
		/*-------------------------------Initialisation constructor-------------------------------*/
			pair(const first_type& a, const second_type& b)
			{
				this->first = a;
				this->second = b;
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------DESTRUCTOR----------------------------------*/
		/*==============================================================================*/
			~pair( void )
			{
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------OPERATOR =----------------------------------*/
		/*==============================================================================*/
			pair& operator=(const pair& pr)
			{
				if (*this == pr)
					return (*this);
				else
				{
					this->first = pr.first;
					this->second = pr.second;
				}
				return (*this);
			}
        /*==============================================================================*/
        /*---------------------------PUBLIC MEMBERS VARIABLES---------------------------*/
        /*==============================================================================*/
			first_type		first;
			second_type		second;
    private:
};

template <class T1, class T2>
bool operator==(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	if (lhs.first == rhs.first && lhs.second == rhs.second)
		return (SUCCESS);
	return (FAILURE);
}

template <class T1, class T2>
bool operator!=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	if (lhs.first == rhs.first && lhs.second == rhs.second)
		return (FAILURE);
	return (SUCCESS);
}

template <class T1, class T2>
bool operator<(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	if (lhs.first < rhs.first)
        return (SUCCESS);
    else if (!(rhs.first < lhs.first) && lhs.second < rhs.second)
        return (SUCCESS);
    return (FAILURE);
}

template <class T1, class T2>
bool operator<=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	/*Ma 1er version*/
	/*if (lhs.first <= rhs.first)
        return (SUCCESS);
    else if (!(rhs.first <= lhs.first) && lhs.second <= rhs.second)
        return (SUCCESS);
    return (FAILURE);*/
	/*2e version*/
	if (lhs.first < rhs.first) {
        return (SUCCESS);
    }
    else if (lhs.first == rhs.first && lhs.second <= rhs.second) {
        return (SUCCESS);
    }
    return (FAILURE);
}

template <class T1, class T2>
bool operator>(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	if (rhs < lhs)
		return (SUCCESS);
	return (FAILURE);
	//return (rhs<lhs);
}

template <class T1, class T2>
bool operator>=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	if ((!(lhs < rhs)))
		return (SUCCESS);
	return (FAILURE);
}

}

#endif