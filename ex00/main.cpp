#include <iostream>
#include <cstdlib>


int main (int argc, const char* argv[])
{
	double temp;
	if (argc != 2)
		{
			std::cout << "wrong number of params!" << std::endl;
			return (0);
		}
	temp = atof(argv[1]);
	std::cout << "Char: " << static_cast<char>(temp) << std::endl;
	std::cout << "Int: " << static_cast<int>(temp) << std::endl;
	std::cout << "Float: " << static_cast<float>(temp) << std::endl;
	std::cout << "Double: " << (temp) << std::endl;
	return (0);
}