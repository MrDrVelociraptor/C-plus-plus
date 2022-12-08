#include "Converter.hpp"
#include <cstring>
#include <cstdlib>

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

double	Converter::checkF( int n ) 
{
	double doubly = 0;
	for (int i = 0; i < n; i++) 
	{
		if (this->_input[i] == '.') 
		{
			i = 0;
			for (i = 0; i < n; i++) 
			{
				if (this->_input[i] == 'f') 
				{
					std::cout << "\033[1;34m//******Input String is FLOAT******//\033[0m" << std::endl;
					doubly = atof(_input.c_str());
					this->_doubly = doubly;
					std::cout << "\033[1;34m//******DOUBLE  = " << this->_doubly << "******//\033[0m" << std::endl;
					this->_floaty = true;
					this->_inty = (int)(doubly);
					this->_floaty = (float)(doubly);
					this->_chary = (char)(doubly);
					std::cout << "\033[1;34m//******DOUBLE conversion to int = " << this->_inty << "******//\033[0m" << std::endl;
					std::cout << "\033[1;34m//******DOUBLE conversion to double = " << this->_floaty << "******//\033[0m" << std::endl;
					std::cout << "\033[1;34m//******DOUBLE conversion to char = " << this->_chary << "******//\033[0m" << std::endl;
					return (doubly);
				}
			}
			if (this->_floaty == false)
			{
				std::cout << "\033[1;34m//******Input String is DOUBLE******//\033[0m" << std::endl;
				this->_inty = (int)(doubly);
				this->_floaty = (float)(doubly);
				this->_chary = (char)(doubly);
				std::cout << "\033[1;34m//******DOUBLE conversion to int = " << this->_inty << "******//\033[0m" << std::endl;
				std::cout << "\033[1;34m//******DOUBLE conversion to double = " << this->_floaty << "******//\033[0m" << std::endl;
				std::cout << "\033[1;34m//******DOUBLE conversion to char = " << this->_chary << "******//\033[0m" << std::endl;
				return ((float)doubly);
			}		
		}
	}
	return (0);
}

void	Converter::checkInput( void ) {
	std::cout << "\033[1;34m//******Input String Check******//\033[0m" << std::endl;
	int 	j;
	int 	n = this->_input.length();
	if  ((this->_input[0] == '-' && isdigit(this->_input[1])) || (isdigit(this->_input[0]))) 
	{
		for (j = 0; (isdigit(this->_input[j])) && j <= n; j++) 
		{
			std::cout << "\033[1;31m//******INT CHECK******//\033[0m" << std::endl;
			std::cout << "\033[1;31m" << "j = " << j << " ****** n = " << n << "\033[0m" << std::endl;
		}
		if (j == n) 
		{
			std::cout << "\033[1;34m//******Input String is INT******//\033[0m" << std::endl;
			std::cout << "\033[1;34m//****** Input String = \033[0m" << this->_input << "\033[1;31m INT\033[0m" << std::endl;
			std::cout << "\033[1;34m//******Int Conversion Started******//\033[0m" << std::endl;
			this->_isInt = true;
			this->_inty = atoi(this->_input.c_str());
			std::cout << "\033[1;34m//******INT = " << this->_inty << "******//\033[0m" << std::endl;
			std::cout << "\033[1;34m//******Int Input Converted******//\033[0m" << std::endl;
		}
		if (this->_isInt == true)
		{
			this->_doubly = (double)(this->_inty);
			this->_floaty = (float)(this->_inty);
			this->_chary = (char)(this->_inty);
			// std::cout << this->_chary << std::endl;
			std::cout << "\033[1;34m//******INT conversion to double = " << this->_doubly << "******//\033[0m" << std::endl;
			std::cout << "\033[1;34m//******INT conversion to float = " << this->_floaty << "******//\033[0m" << std::endl;
			std::cout << "\033[1;34m//******INT conversion to char = " << this->_chary << "******//\033[0m" << std::endl;
		}
		if (this->_isInt == false)
		{
			checkF(n);
		}
	}
	else if ((isprint(this->_input[0])) && !(isdigit(this->_input[0]))) 
	{
		std::cout << "\033[1;34m//******Input String is printable CHAR******//\033[0m" << std::endl;
		std::cout << "\033[1;34m//****** Input String = \033[0m" << this->_input << "\033[1;31m CHARACTER\033[0m" << std::endl;
		std::cout << "\033[1;34m//******Input String Checked******//\033[0m" << std::endl;
		cToAll(cConvert());
	}
}


char	Converter::cConvert( void ) {
	int 	n = this->_input.length();
	char	chary[n + 1];
	std::cout << "\033[1;32m//******Character Conversion Started******//\033[0m" << std::endl;

	strcpy(chary, _input.c_str());
	std::cout << "\033[1;32m//******Character Conversion Output******//\033[0m" << std::endl;
	for (int i = 0; i < n + 1; i++)
		std::cout << chary[i];
	std::cout << std::endl;
	std::cout << "\033[1;32m//*****Character Converted*****//\033[0m" << std::endl;
	return (*chary);
}

void Converter::cToAll( char c ) {
	std::cout << "\033[1;32m//******Character Input = " << c << " ******//\033[0m" << std::endl;
	this->_inty = static_cast<int>(c);
	this->_doubly = static_cast<double>(this->_inty);
	this->_floaty = static_cast<float>(this->_inty);
	std::cout << "\033[1;32m//*****Int Conversion from char = " << this->_inty << "*****//\033[0m" << std::endl;
	std::cout << "\033[1;32m//*****Double Conversion from char = " << this->_doubly << "*****//\033[0m" << std::endl;
	std::cout << "\033[1;32m//*****Float Conversion from char = " << this->_floaty << "*****//\033[0m" << std::endl;
}

// int	Converter::iConvert( std::string input ) {
	
// }

// double	Converter::dConvert( std::string input ) {
	
// }

// float	Converter::fConvert( std::string input ) {
	
// }

char const *Converter::Unconvertable::what(void) const throw() {
	return ("Can't convert");
}

char const *Converter::Unprintable::what(void) const throw() {
	return ("Non-displayable");
}

Converter&	Converter::operator=(const Converter& assign) {
	std::cout << "\033[1;33m//*****Object operator overload*****//\033[0m" << std::endl;
	this->_input = assign.getInput();
	std::cout << "\033[1;33m//" << "The input string was: " << this->_input << "//\033[0m" << std::endl;
	std::cout << "\033[1;33m//*****Object operator overload*****//\033[0m" << std::endl;
	return (*this);
}
