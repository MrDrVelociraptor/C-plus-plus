#include "Converter.hpp"

std::string	argCheck(char *input) {
	if (input[0] && !input[1])
	{
		if (isprint(input[0]) && !isdigit(input[0]))
		{
			std::stringstream tmp;
			tmp << (int)input[0];
			std::string c = tmp.str();
			return (c);
		}
	}
	return (input);
}

int	main(int ac, char **av) {

	if (ac != 2)
    {
        std::cout << "Invalid Input!" << std::endl;
        return (1);
    }
	
    std::string arg = argCheck(av[1]);
    
	Converter convo(arg);
	
	if (!convo.goodPut())
    {
        std::cout <<
        "char: impossible" << std::endl <<
        "int: impossible" << std::endl <<
        "float: impossible" << std::endl <<
        "double: impossible" << std::endl;
        return (0);
    }
    std::cout << "char: ";
    try
    {
        std::cout << convo.cConvert() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "int: ";
    try
    {
        std::cout << convo.iConvert() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    float f = convo.fConvert();
    if (f == (int)f)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
    }
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << convo.dConvert() << std::endl;

    return (0);

	return (0);
}