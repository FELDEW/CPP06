
#include "convert.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2) 
	{
		std::cerr << "Wrong number of params!" << std::endl;
		return 1;
	}
	std::string value = argv[1];
	double 		tmp_val;
	std::stringstream ss;
	std::string tmp;
	
	if(value.length() == 1 && !std::isdigit(value[0]))
		tmp_val = static_cast<int>(value[0]);
	else
		tmp_val = atof(argv[1]);
	if (value.length() >= 3 && !std::isdigit(value[0]))
		std::cout << "char: impossible" << std::endl;
	else if((tmp_val < 127 && tmp_val > 31))
		std::cout << "char: " << static_cast<char>(tmp_val) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if ((value.length() >= 3 && !std::isdigit(value[0])) || tmp_val > std::numeric_limits<int>::max() || tmp_val < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(tmp_val) << std::endl;
	ss << "float: " << tmp_val;
	tmp = ss.str();
	if (!(std::isnan(tmp_val) || std::isinf(tmp_val)) && tmp.find('.') == std::string::npos)
		ss << ".0";
	ss << "f\n";
	std::cout << ss.str();
	ss.str(std::string());
	ss.clear();
	ss << "double: " << tmp_val;
	tmp = ss.str();
	if (!(std::isnan(tmp_val) || std::isinf(tmp_val)) && tmp.find('.') == std::string::npos)
		ss << ".0";
	std::cout << ss.str() << std::endl;
	return 0;
}