# include "vector.hpp"
# include <vector>

int main( void )
{
/*	ft::vector<std::string> vector;


//	vector.SetTab("salut mon gars");

	ft::vector<std::string> vector2(vector);

	ft::vector<int> vector4(1000, 0);
	ft::vector<int> vector5(50, 0);
	ft::vector<std::string> popo(5, "salut les gars");
	std::cout << "vector == " << vector.GetTab() << std::endl;
	std::cout << "vector2 == " << vector2.GetTab() << std::endl;
	ft::vector<int> vector3(vector4);
	ft::vector<int> vector7(vector4);
	ft::vector<int> vector6(vector5);

	vector2 = vector;
	vector3 = vector6;

	vector5 = vector6;

	vector4.reserve(100000000000000000);*/

	ft::vector<int> toto;
	std::vector<int> popo;

	std::cout << "toto size : " << toto.size() << std::endl;
	std::cout << "toto capacity : " << toto.capacity() << std::endl;
//	popo.reserve(1000000000000000000);
	toto.reserve(1000);

	try
	{
		toto.reserve(4611686018427387904);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		toto.reserve(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "popo capacity : " << popo.capacity() << std::endl;
	std::cout << "popo size : " << popo.size() << std::endl;
	std::cout << "toto capacity : " << toto.capacity() << std::endl;
	std::cout << "toto size : " << toto.size() << std::endl;


/*	ft::vector<std::string> vector;
	ft::vector<std::string> vector2(100, "salut les gars");

	ft::vector<int> vector3;
	ft::vector<int> vector4(100, 1);

	vector = vector2;
	vector3 = vector4;

	ft::vector<std::string> vector5(vector2);*/
    return (0);
}