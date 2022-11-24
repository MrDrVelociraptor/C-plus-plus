#include "Converter.hpp"
#include <cstring>

Converter::Converter() {
	std::cout << "\033[1;33m//*****Default constructor*****//\033[0m" << std::endl;
}

Converter::Converter( std::string input ) {
	std::cout << "\033[1;33m//*****Input Constructor*****//\033[0m" << std::endl;
	this->_input = input;
	std::cout << "\033[1;33m//" << "The input string was: " << this->_input << "//\033[0m" << std::endl;
	std::cout << "\033[1;33m//*****Input Constructor*****//\033[0m" << std::endl;

}

Converter::Converter(const Converter& copy) {
	std::cout << "\033[1;33m//*****Copy Input Constructor*****//\033[0m" << std::endl;
	this->_input = copy.getInput();
	std::cout << "\033[1;33m//" << "The input string was: " << this->_input << "//\033[0m" << std::endl;
	std::cout << "\033[1;33m//*****Copy Input Constructor*****//\033[0m" << std::endl;
}

Converter::~Converter() {
	std::cout << "\033[1;31m//*****Conversion Executed*****//\033[0m" << std::endl;
	
}

std::string Converter::getInput( void ) const {
	return (this->_input);
}

void	Converter::checkInput( void ) {
	std::cout << "\033[1;34m//******Input String Check******//\033[0m" << std::endl;
	int		i = 0;
	int 	n = this->_input.length();
	std::cout << "\033[1;34m//****** Input string length = " << n << "******//\033[0m" << std::endl;
	if (n == 1 && (this->_input[i] >= 32 && this->_input[i] <= 126)) {
		std::cout << "\033[1;34m//****** Input String = \033[0m" << "\033[1;31mCHARACTER\033[0m" << std::endl;
		std::cout << "\033[1;34m//******Input String Checked******//\033[0m" << std::endl;
		cConvert();
	}
	// for (int i = 0; this->_input[i]; i++) {
	// std::cout << "\033[1;34m//****** Character " << i << " = " << this->_input[i] << "******//\033[0m" << std::endl;

	// }


}

void	Converter::cConvert( void ) {
	int 	n = this->_input.length();
	char	chary[n + 1];
	std::cout << "\033[1;32m//******Character Conversion Started******//\033[0m" << std::endl;

	strcpy(chary, _input.c_str());
	std::cout << "\033[1;32m//******Character Conversion Output******//\033[0m" << std::endl;
	for (int i = 0; i < n + 1; i++)
		std::cout << chary[i];
	std::cout << std::endl;
	std::cout << "\033[1;32m//*****Character Conversion Converted*****//\033[0m" << std::endl;
	
}

// int	Converter::iConvert( std::string input ) {
	
// }

// double	Converter::dConvert( std::string input ) {
	
// }

// float	Converter::fConvert( std::string input ) {
	
// }

Converter&	Converter::operator=(const Converter& assign) {
	std::cout << "\033[1;33m//*****Object operator overload*****//\033[0m" << std::endl;
	this->_input = assign.getInput();
	std::cout << "\033[1;33m//" << "The input string was: " << this->_input << "//\033[0m" << std::endl;
	std::cout << "\033[1;33m//*****Object operator overload*****//\033[0m" << std::endl;
	return (*this);
}
