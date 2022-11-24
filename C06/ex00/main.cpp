#include "Converter.hpp"

int	main( void ) {

	std::string input;

	std::cout << "Input the string literal to be converted: " << std::endl;
	std::cin >> input;
	Converter convo(input);
	convo.checkInput();
	// convo.cConvert();
	return (0);
}