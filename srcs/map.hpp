#ifndef MAP_HPP
# define MAP_HPP

# include "utils.hpp"
# include "pair.hpp"
# include "binary_function.hpp"
namespace ft
{

template <	class Key,
			class T,
			class Compare = std::less<Key>,
			class Alloc = std::allocator<ft::pair<const Key,T> > >//changer pair
class map
{
	public:
		/*==============================================================================*/
		/*----------------------------STD::ALLOCATOR ALIASES----------------------------*/
		/*==============================================================================*/
			typedef Key											key_type;
			typedef T											mapped_type;
			typedef	ft::pair<const key_type, mapped_type>		value_type; // changer le std en ft
			typedef Compare										key_compare;
	/*class value_compare value_comp() const : public std::binary_function<value_type, value_type, bool> // changer le std en ft
	{

	};*/
	/*===========================================================================*/
	/*									A RETIRER 								 */
	/*===========================================================================*/
		class value_compare : ft::binary_function<value_type, value_type, bool>
		{
			friend class ft::map<Key, T, Compare, Alloc>;
			protected:
				key_compare comp;
				value_compare(key_compare c) : comp(c) { }
			public:
					typedef bool result_type;
					typedef value_type first_argument_type;
					typedef value_type second_argument_type;
					bool operator()( const value_type& lhs, const value_type& rhs ) const
					{
						return (comp(lhs.first, rhs.first));
					}
		};
/*================================================================================*/
			typedef Alloc										allocator_type;
			typedef typename allocator_type::reference			reference;
			typedef typename allocator_type::const_reference	const_reference;
			typedef typename allocator_type::pointer			pointer;
			typedef typename allocator_type::const_pointer		const_pointer;
			typedef	ft::random_access_iterator<value_type>		iterator;
			typedef	ft::random_access_iterator<const value_type> const_iterator;
			typedef	ft::reverse_iterator<iterator>			reverse_iterator;
			typedef	ft::reverse_iterator<const_iterator>	const_reverse_iterator;
			typedef typename allocator_type::difference_type	difference_type;
			typedef typename allocator_type::size_type			size_type;

		/*==============================================================================*/
		/*---------------------------------CONSTRUCTORS---------------------------------*/
		/*==============================================================================*/

		/*------------------------------Default constructor-----------------------------*/	
			explicit map(const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
			{
				this->_allocator = alloc;
				this->_size = 0;
				this->_comp = comp;
				return ;
			}
		/*-------------------------------Range constructor------------------------------*/
			template <class InputIterator>
			map(InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type(), typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type* = 0)
			{
				this->_allocator = alloc;
				this->_size = 0;
				this->_comp = comp;
				while (first != last)
				{
					first++;
				}
				return ;
			}
		/*-------------------------------Copy constructor-------------------------------*/
			map(const map& x)
			{
				this->_allocator = x._allocator;
				this->_size = x._size;
				this->_comp = x.comp;
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------DESTRUCTOR----------------------------------*/
		/*==============================================================================*/
			~map( void )
			{
				return ;
			}
		/*==============================================================================*/
		/*----------------------------------OPERATOR =----------------------------------*/
		/*==============================================================================*/
			map& operator=(const map& x)
			{
				if (*this == x)
					return (*this);
				else
				{
					this->_allocator = x._allocator;
					this->_size = x._size;
					this->_comp = x.comp;
				}
				return (*this);
				/*A TERMINER*/
			}


	private:
		size_type														_size;
		allocator_type													_allocator;
		key_compare														_comp;
		/*pointeur avec arbre binaire*/

};

}

#endif