# include "vector.hpp"

int main( void )
{
	ft::vector<std::string> vector;

	vector.SetTab("salut mon gars");

	ft::vector<std::string> vector2(vector);
	ft::vector<std::string> vector3 = vector2;

	std::cout << "vector == " << vector.GetTab() << std::endl;
	std::cout << "vector2 == " << vector2.GetTab() << std::endl;
	std::cout << "vector3 == " << vector3.GetTab() << std::endl;

	ft::vector<A> popo;

	if (vector == vector2)
		std::cout << "vector2 == vector" << std::endl;
	else
		std::cout << "vector2 != vector" << std::endl;
	if (vector2 == vector3)
		std::cout << "vector3 == vector2" << std::endl;
	else
		std::cout << "vector3 != vector2" << std::endl;
	if (vector == vector3)
		std::cout << "vector3 == vector" << std::endl;
	else
		std::cout << "vector3 != vector" << std::endl;


    return (0);
}