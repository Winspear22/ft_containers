#ifndef ITERATOR_TRAITS_HPP
# define ITERATOR_TRAITS_HPP

# include "utils.hpp"

namespace ft
{
	/*==============================================================================*/
	/*----------------------------ITERATOR TRAITS STRUCT----------------------------*/
	/*==============================================================================*/
	/* It's a struct derivated from the struct Iterator which allows the obtention  */
	/* of information regarding an iterator without knowing its the class or struct */
	/* We obtain these infos by using the traits taken from the types that we have  */
	/* already seen (difference_type, value_type, etc...). Moreover, they are taken */
	/* from the struct Iterator, hence the typedef typename Iter::.					*/
	/*------------------------------------------------------------------------------*/
	template < class Iter >
	struct iterator_traits
	{
		typedef typename Iter::difference_type		difference_type;
		typedef typename Iter::value_type			value_type;
		typedef typename Iter::pointer				pointer;
		typedef typename Iter::reference			reference;
		typedef typename Iter::iterator_category	iterator_category;
	};
	/*==============================================================================*/

	/*==============================================================================*/
	/*--------------------------ITERATOR TRAITS<T*> STRUCT--------------------------*/
	/*==============================================================================*/
	/* It's a struct that defines the types like the previous struct; However it is */
	/* specialised in managing pointers to types T*. It basically does the same     */
	/* thing as iterator_traits with the difference that we know in advance the type*/
	/* of the variable that is put in the iterator<T*>, like iterator<int *>, so no */
	/* need to use typedef typename or inherit anything from Iter::					*/
	/*------------------------------------------------------------------------------*/

	template < class T >
	struct iterator_traits<T*>
	{
		typedef ptrdiff_t							difference_type;
		typedef T									value_type;
		typedef T*									pointer;
		typedef T&									reference;
		typedef std::random_access_iterator_tag		iterator_category;	
	};
	/*==============================================================================*/

	/*==============================================================================*/
	/*-----------------------ITERATOR TRAITS<CONST T*> STRUCT-----------------------*/
	/*==============================================================================*/
	/*It is a struct that does the same thing as the struct iterator_traits<T*> but */
	/* with const T* types of variables												*/
	/*------------------------------------------------------------------------------*/
	template < class T >
	struct iterator_traits<const T*>
	{
		typedef ptrdiff_t							difference_type;
		typedef T									value_type;
		typedef const T*							pointer;
		typedef const T&							reference;
		typedef std::random_access_iterator_tag		iterator_category;	
	};
	/*==============================================================================*/
}

#endif