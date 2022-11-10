#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	Bureaucrat	steve("Steve", 23);
	Form		from("FTID42", 24, 1);

	std::cout << steve << std::endl << from << std::endl;

	std::cout << "\033[1;33m//****************SPAWN******************//\033[0m" << std::endl;
	try
	{
		Form	reject("No", -10, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;33m//****************SPAWN******************//\033[0m" << std::endl;


	try
	{
		steve.signForm(from);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		from.beSigned(steve);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	steve++;
	steve.signForm(from);
	from.beSigned(steve);
	

	return (0);
}