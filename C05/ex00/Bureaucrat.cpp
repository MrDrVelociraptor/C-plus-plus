#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( int grade ): _name("BCrat") {
	if ( grade < 1 )
		throw GradeTooHighException();
	else if ( grade > 150 )
		throw GradeTooLowException();
	else
		this->_grade = grade;
	std::cout << "Default constructor, " << this->_name << " has a grade of " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name) {
	if ( grade < 1 )
		throw GradeTooHighException();
	else if ( grade > 150 )
		throw GradeTooLowException();
	else
		this->_grade = grade;
	std::cout << "Named constructor, " << this->_name << " has a grade of " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy.getName()), _grade(copy.getGrade()) {
	std::cout << "Copy constructor, " << this->_name << " has a grade of " << this->_grade << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << this->_name << " is doing the only thing Bureaucrats are good for, dieing" << std::endl;

}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& assign) {
	this->_grade = assign.getGrade();
	std::cout << "Operator over" << std::endl;
	return (*this);
}

std::string	Bureaucrat::getName( void ) const {
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

Bureaucrat	&Bureaucrat::operator++( int ) {
	if (this->_grade - 1 >= 1)
		this->_grade--;
	else
	{
		throw GradeTooHighException();
	}
	return (*this);
}

Bureaucrat	&Bureaucrat::operator--( int ) {
	if (this->_grade + 1 <= 150)
		this->_grade++;
	else
	{
		throw GradeTooLowException();
	}
	
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Brain too big");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Tiny Brain");
}

std::ostream	&operator << ( std::ostream &stream, const Bureaucrat &bur ) {
	stream << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return (stream);
}
