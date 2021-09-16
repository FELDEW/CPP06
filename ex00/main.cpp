
#include "convert.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2) 
	{
		std::cerr << "Wrong number of params!" << std::endl;
		return 1;
	}
	std::string value;
	double 		double_val;
	std::stringstream ss;
	float 		float_val;
	
	value = argv[1];
	if(value.length() == 1 && !std::isdigit(value[0]))
		double_val = static_cast<double>(value[0]);
	else
		double_val = atof(argv[1]);


	if (std::isnan(double_val) || std::isinf(double_val) || double_val < 0 || double_val > 127)
		std::cout << "char: impossible" << std::endl;
	else if((double_val < 127 && double_val > 31))
		std::cout << "char: " << static_cast<char>(double_val) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;


	if (std::isnan(double_val) || std::isinf(double_val) || double_val > std::numeric_limits<int>::max() || double_val < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(double_val) << std::endl;


	float_val = static_cast<float>(double_val);
	ss << "float: " << float_val;
	value = ss.str();
	if (!(std::isnan(float_val) || std::isinf(float_val)) && value.find('.') == std::string::npos)
		ss << ".0";
	ss << "f\n";
	std::cout << ss.str();
	ss.str(std::string());
	ss.clear();


	ss << "double: " << double_val;
	value = ss.str();
	if (!(std::isnan(double_val) || std::isinf(double_val)) && value.find('.') == std::string::npos)
		ss << ".0";
	std::cout << ss.str() << std::endl;
	return 0;
	// ./a.out 99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
}
