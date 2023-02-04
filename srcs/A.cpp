# include "vector.hpp"

A::A( void )
{
    std::cout << "Class A creee" << std::endl;
    a = 1;
}

A::~A( void )
{
    std::cout << "Class A detruite" << std::endl;

}

int A::getA( void )
{
    return (this->a);
}