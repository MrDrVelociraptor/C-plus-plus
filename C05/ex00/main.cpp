#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat	person(1);
	Bureaucrat	person2(person);
	Bureaucrat	person3("Barry", 150);

	try {
		std::cout << person++ << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << person3-- << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << person2-- << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return (0);
}