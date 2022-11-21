#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Interns shouldn't exist in a capitalist society" << std::endl;
}

Intern::Intern(const Intern& copy) {
	(void)copy;
	std::cout << "Copied Interns shouldn't exist in a capitalist society" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern met death" << std::endl;
}

Intern&	Intern::operator=(const Intern& assign) {
	(void)assign;
	return (*this);
}

Form	*Intern::makeForm( const std::string &name, const std::string &target ) {

	int	idx = 0;
	Form	*returnForm;
	std::string form_types[3] = {"Shrubbery Creation",
								"Robotomy Request",
								"Presidential Pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(form_types[i]))
			break ;
		idx++;
	}
	switch (idx)
	{
		case 0:
			std::cout << "The intern has created a form called " << name << std::endl;
			returnForm = new ShrubberyCreationForm(target);
			return (returnForm);
			break;
		case 1:
			std::cout << "The intern has created a form called " << name << std::endl;
			returnForm = new RobotomyRequestForm(target);
			return (returnForm);
			break;
		case 2:
			std::cout << "The intern has created a form called " << name << std::endl;
			returnForm = new PresidentialPardonForm(target);
			return (returnForm);
			break;
		default:
			std::cout << "No " << name << " Form Exists!" << std::endl;
			return (NULL);
			break;
	}
}
