#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"




int	main( void )
{
	Intern	greg;
	Form	*allForms[3];
	Bureaucrat	steve("Steve", 138);
	allForms[0] = greg.makeForm("Shrubbery Creation", "Arthur");
	allForms[1] = greg.makeForm("Robotomy Request", "Gerald");
	allForms[2] = greg.makeForm("Presidential Pardon", "Ford Prefect");

	allForms[0]->execute(steve);
	allForms[1]->execute(steve);
	allForms[2]->execute(steve);
	// Bureaucrat	stevet("Steve", 5);
	// allForms[0]->execute(stevet);
	// allForms[1]->execute(stevet);
	// allForms[2]->execute(stevet);
	delete allForms[0];
	delete allForms[1];
	delete allForms[2];
	return (0);
}