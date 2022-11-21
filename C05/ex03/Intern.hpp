#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern( void );
		Intern( const Intern& copy );
		~Intern( void );

		Intern&	operator=( const Intern& assign );

		Form	*makeForm( const std::string &name, const std::string &target );

	private:

};

#endif
