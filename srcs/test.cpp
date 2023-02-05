# include "vector.hpp"
# include <vector>

int main( void )
{
	ft::vector<std::string> vector;


	vector.SetTab("salut mon gars");

	ft::vector<std::string> vector2(vector);

	ft::vector<int> vector4(10, 0);
	ft::vector<int> vector5(0, 0);
	ft::vector<std::string> popo(5, "salut les gars");
	std::cout << "vector == " << vector.GetTab() << std::endl;
	std::cout << "vector2 == " << vector2.GetTab() << std::endl;
	ft::vector<int> vector3(vector4);
	ft::vector<int> vector6(vector5);

	vector2 = vector;
	vector3 = vector6;

/*	ft::vector<std::string> vector;
	ft::vector<std::string> vector2(100, "salut les gars");

	ft::vector<int> vector3;
	ft::vector<int> vector4(100, 1);

	vector = vector2;
	vector3 = vector4;*/
    return (0);
}