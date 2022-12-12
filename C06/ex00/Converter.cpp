#include "Converter.hpp"


Converter::Converter() {
	// std::cout << "\033[1;33m//*****Default constructor*****//\033[0m" << std::endl;
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

char const *Converter::Unconvertable::what(void) const throw() {
	return ("Not convertable");
}

char const *Converter::Unprintable::what(void) const throw() {
	return ("Not printable char");
}

// void	Converter::checkFD( int n ) 
// {
// 	bool yes;
// 	for (int i = 0; i < n; i++) 
// 	{
// 		if (this->_input[i] == '.') 
// 		{
// 			i = 0;
// 			for (i = 0; i < n; i++) 
// 			{
// 				if (this->_input[i] == 'f') 
// 				{
// 					std::cout << "\033[1;34m//******Input String is FLOAT******//\033[0m" << std::endl;
// 					yes = true;
// 					try {
// 						std::cout << std::fixed << std::setprecision(1) << "\033[1;34m//" << "float: " << fConvert() << "f" << " //\033[0m" << std::endl;
// 					}
// 					catch (const std::exception& e) {
// 						std::cerr << e.what() << std::endl;
// 					}
// 					try {
// 						std::cout << std::fixed << std::setprecision(1) << "\033[1;34m//" << "double: " << dConvert() << " //\033[0m" << std::endl;
// 					}
// 					catch (const std::exception& e) {
// 						std::cerr << e.what() << std::endl;
// 					}
// 					try {
// 						std::cout << "\033[1;34m//" << "int: " << iConvert() << " //\033[0m" << std::endl;
// 					}
// 					catch (const std::exception& e) {
// 						std::cerr << e.what() << std::endl;
// 					}
// 					try {
// 						std::cout << "\033[1;34m//" << "char: " << cConvert() << " //\033[0m" << std::endl;
// 					}
// 					catch (const std::exception& e) {
// 						std::cerr << e.what() << std::endl;
// 					}
// 				}
// 			}
// 			if (yes == false)
// 			{
// 				std::cout << "\033[1;32m//******Input String is DOUBLE******//\033[0m" << std::endl;
// 				try {
// 					std::cout << std::fixed << std::setprecision(1) << "\033[1;32m//" << "double: " << dConvert() << " //\033[0m" << std::endl;
// 				}
// 				catch (const std::exception& e) {
// 					std::cerr << e.what() << std::endl;
// 				}
// 				try {
// 					std::cout << std::fixed << std::setprecision(1) << "\033[1;32m//" << "float: " << fConvert() << "f" << " //\033[0m" << std::endl;
// 				}
// 				catch (const std::exception& e) {
// 					std::cerr << e.what() << std::endl;
// 				}
// 				try {
// 					std::cout << "\033[1;32m//" << "int: " << iConvert() << " //\033[0m" << std::endl;
// 				}
// 				catch (const std::exception& e) {
// 					std::cerr << e.what() << std::endl;
// 				}
// 				try {
// 					std::cout << "\033[1;32m//" << "char: " << cConvert() << " //\033[0m" << std::endl;
// 				}
// 				catch (const std::exception& e) {
// 					std::cerr << e.what() << std::endl;
// 				}
// 			}		
// 		}
// 	}
// }

// void	Converter::checkInput( void ) {
// 	std::cout << "\033[1;34m//******Input String Check******//\033[0m" << std::endl;
// 	int 	j;
// 	int 	n = this->_input.length();
// 	bool	yes = false;
// 	if  ((this->_input[0] == '-' && isdigit(this->_input[1])) || (isdigit(this->_input[0]))) 
// 	{
// 		for (j = 0; (isdigit(this->_input[j])) && j <= n; j++) 
// 		{
// 			// std::cout << "\033[1;31m//******INT CHECK******//\033[0m" << std::endl;
// 			// std::cout << "\033[1;31m" << "j = " << j << " ****** n = " << n << "\033[0m" << std::endl;
// 		}
// 		if (j == n) 
// 		{
// 			std::cout << "\033[1;34m//******Input String is INT******//\033[0m" << std::endl;

// 			try {
// 				std::cout << "\033[1;31m//" << "int: " << iConvert() << " //\033[0m" << std::endl;
// 			}
// 			catch (const std::exception& e) {
// 				std::cerr << e.what() << std::endl;
// 			}
// 			yes = true;
// 		}
// 		if (yes == true)
// 		{
// 			try {
// 				std::cout << std::fixed << std::setprecision(1) << "\033[1;31m//" << "double: " << dConvert() << " //\033[0m" << std::endl;
// 			}
// 			catch (const std::exception& e) {
// 				std::cerr << e.what() << std::endl;
// 			}
// 			try {
// 				std::cout << std::fixed << std::setprecision(1) << "\033[1;31m//" << "float: " << fConvert() << "f" << " //\033[0m" << std::endl;
// 			}
// 			catch (const std::exception& e) {
// 				std::cerr << e.what() << std::endl;
// 			}
// 			try {
// 				std::cout << "\033[1;31m//" << "char: " << cConvert() << " //\033[0m" << std::endl;
// 			}
// 			catch (const std::exception& e) {
// 				std::cerr << e.what() << std::endl;
// 			}
// 		}
// 		if (yes == false)
// 		{
// 			checkFD(n);
// 		}
// 	}
// 	else if ((isprint(this->_input[0])) && !(this->_input[1])) 
// 	{
// 		char c;
// 		strcpy(&c, _input.c_str());
// 		this->_chary = c;
// 		std::cout << "\033[1;34m//******Input String is printable CHAR " << this->_chary << " ******//\033[0m" << std::endl;
// 		this->_doubly = static_cast<double>(this->_chary);
// 		this->_floaty = static_cast<float>(this->_chary);
// 		this->_inty = static_cast<int>(this->_chary);
// 		try {
// 			std::cout << std::fixed << std::setprecision(1) << "\033[1;31m//" << "double: " << this->_doubly << " //\033[0m" << std::endl;
// 		}
// 		catch (const std::exception& e) {
// 			std::cerr << e.what() << std::endl;
// 		}
// 		try {
// 			std::cout << std::fixed << std::setprecision(1) << "\033[1;31m//" << "float: " << this->_floaty << "f" << " //\033[0m" << std::endl;
// 		}
// 		catch (const std::exception& e) {
// 			std::cerr << e.what() << std::endl;
// 		}
// 		try {
// 			std::cout << "\033[1;31m//" << "int: " << this->_inty << " //\033[0m" << std::endl;
// 		}
// 		catch (const std::exception& e) {
// 			std::cerr << e.what() << std::endl;
// 		}
// 	}
// }

double	Converter::dConvert( void ) {
	this->_doubly = atof(_input.c_str());
	return (this->_doubly);
}

float 	Converter::fConvert( void ) {
	this->_floaty = (float)(this->_doubly);
	return (this->_floaty);
}

int		Converter::iConvert( void ) {
	float floater = dConvert();
	this->_inty = (int)floater;
	if (isnan(floater) || isinf(floater))
		throw Unprintable();
	if (floater < MIN || floater > MAX)
		throw Unconvertable();
	return (this->_inty);
}

char	Converter::cConvert( void ) {
	float floater = dConvert();
	this->_chary = (char)floater;
	if (isnan(floater) || isinf(floater))
		throw Unprintable();
	if (floater < 33 || floater > 126)
		throw Unprintable();
	return (this->_chary);
}

bool	Converter::goodPut( void ) {
	if (!_input[1])
		return (true);
	if (this->dConvert())
		return (true);
	for (int i = 0; _input[i]; i++) {
		if (!isdigit(_input[i]) && _input[i] != '-' && _input[i] != '.' && _input[i] != '+')
			return (false);
	}
	return (true);
}

