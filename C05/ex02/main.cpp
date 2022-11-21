#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"




int	main( void )
{
	std::cout << "\033[1;33m//****************SPAWN******************//\033[0m" << std::endl;

	Bureaucrat	steve("Steve", 4);
	Bureaucrat	dave("Dave", 149);

	PresidentialPardonForm		from("Criminal X");
	RobotomyRequestForm			robot("Captain Robot");
	ShrubberyCreationForm		bush("MR BUSH");


	std::cout << "\033[1;33m//****************SPAWNED******************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32m//****************SIGN*FORM****************//\033[0m" << std::endl;
	try
	{
		from.beSigned(steve);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	from.execute(steve);
	std::cout << "\033[1;32m//****************SIGN*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32m//***********FAIL*SIGN*FORM****************//\033[0m" << std::endl;
	try
	{
		from.beSigned(dave);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	from.execute(dave);
	std::cout << "\033[1;32m//***********FAIL*SIGN*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31m//***********ROBOT*SIGN*FORM****************//\033[0m" << std::endl;
	try
	{
		robot.beSigned(steve);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m//**********ROBOT*SIGN*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31m//**********ROBOT*EXCUTE*FORM****************//\033[0m" << std::endl;
	robot.execute(steve);
	std::cout << "\033[1;31m//**********ROBOT*EXCUTE*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;31m//*****ROBOT*FAIL*SIGN*FORM****************//\033[0m" << std::endl;
	try
	{
		robot.beSigned(dave);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	robot.execute(dave);
	std::cout << "\033[1;31m//*****ROBOT*FAIL*SIGN*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31m//***********BUSH*SIGN*FORM****************//\033[0m" << std::endl;
	try
	{
		bush.beSigned(steve);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m//**********BUSH*SIGN*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31m//**********BUSH*EXCUTE*FORM****************//\033[0m" << std::endl;
	bush.execute(steve);
	std::cout << "\033[1;31m//**********BUSH*EXCUTE*FORM****************//\033[0m" << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;31m//*****BUSH*FAIL*SIGN*FORM****************//\033[0m" << std::endl;
	try
	{
		bush.beSigned(dave);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	bush.execute(dave);
	std::cout << "\033[1;31m//*****BUSH*FAIL*SIGN*FORM****************//\033[0m" << std::endl;
	return (0);
}