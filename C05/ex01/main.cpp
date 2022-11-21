#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	std::cout << "\033[1;33m//****************SPAWN******************//\033[0m" << std::endl;

	Bureaucrat	steve("Steve", 23);
	Form		from("FTID42", 24, 1);

	std::cout << "\033[1;33m//****************SPAWNED******************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33m//****************OSTREAM*OVERLOAD******************//\033[0m" << std::endl;
	std::cout << steve << std::endl << from << std::endl;
	std::cout << "\033[1;33m//****************OSTREAM*OVERLOAD****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32m//****************SIGN*FORM****************//\033[0m" << std::endl;
	try
	{
		steve.signForm(from);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;32m//****************SIGN*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32m//****************SIGNED*FORM****************//\033[0m" << std::endl;
	try
	{
		from.beSigned(steve);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;32m//****************SIGNED*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31m//****************SIGNED*FORM****************//\033[0m" << std::endl;
	try
	{
		from.beSigned(steve);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m//****************SIGNED*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31m//****************FORM*TOO*HIGH****************//\033[0m" << std::endl;
	try
	{
		Form	reject("No", -10, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m//****************FORM*TOO*HIGH****************//\033[0m" << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;33m//****************CHECKS****************//\033[0m" << std::endl;	
	steve++;
	steve.signForm(from);
	from.beSigned(steve);
	std::cout << "\033[1;33m//****************CHECKS****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33m//****************DEATH****************//\033[0m" << std::endl;	

	return (0);
}