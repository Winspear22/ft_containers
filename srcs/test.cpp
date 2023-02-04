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



    return (0);
}