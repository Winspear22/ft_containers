#ifndef VECTOR_ITERATOR_HPP
# define VECTOR_ITERATOR_HPP

# include "utils.hpp"
# include "vector.hpp"

//class vector;

namespace ft
{
	/*==============================================================================*/
	/*--------------------------------ITERATOR STRUCT-------------------------------*/
	/*==============================================================================*/
	/* Gives a basic structure for iterators. It defines several typedefs that will */
	/* be common to all iterators,  5 in total : iterator_category, value_type,     */
	/* difference_type, pointer and reference. They all correspond to arguments     */
	/* found in the prototype of the structure.										*/
	/*------------------------------------------------------------------------------*/
	template <class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
	struct iterator
	{
		typedef Category	iterator_category; /*Type that defines the level of dereferencing of the iterator, (les fameux tags)*/
		typedef T			value_type; /*Type of the iterator (int, char, std::string, etc...).*/
		typedef Distance	difference_type; /*Type that gives us the distance between two iterators.*/
		typedef Pointer		pointer; /*Type that describes the adress of the element pointed by the iterator (the data that is inside)*/
		typedef Reference	reference; /*Type that describes the reference of the element pointed by the iterator.*/
	};
	/*==============================================================================*/
}

#endif