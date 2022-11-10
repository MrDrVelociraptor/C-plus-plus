#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name, int sign_grade, int exe_grade ): _name(name), _sign_grade(sign_grade), _exe_grade(exe_grade) {
	if ( sign_grade < 1 || exe_grade < 1 )
		throw GradeTooHighException();
	else if ( sign_grade > 150 || exe_grade > 150 )
		throw GradeTooLowException();
	this->_signed = false;
	std::cout << "A wild Form appeared" << std::endl;
	std::cout << "Form is called " << this->_name << std::endl;
	std::cout << "Grade to sign = " << this->_sign_grade << std::endl;
	std::cout << "Grade to execute = " << this->_exe_grade << std::endl;
	std::cout << "Signed = " << this->_signed << std::endl;

}

Form::Form(const Form& copy): _name(copy.getName()), _sign_grade(copy.getSignGrade()), _exe_grade(copy.getExeGrade()) {
	if ( _sign_grade < 1 || _exe_grade < 1 )
		throw GradeTooHighException();
	else if ( _sign_grade > 150 || _exe_grade > 150 )
		throw GradeTooLowException();
	this->_signed = copy.getSigned();
	std::cout << "Someone learned to use the photocopier" << std::endl;
	std::cout << "Form is called " << this->_name << std::endl;
	std::cout << "Grade to sign = " << this->_sign_grade << std::endl;
	std::cout << "Grade to execute = " << this->_exe_grade << std::endl;
	std::cout << "Signed = " << this->_signed << std::endl;
}

Form::~Form() {
	std::cout << "Bye bye " << this->_name << std::endl;
}

std::string Form::getName( void ) const {
	return (this->_name);
}

int	Form::getSignGrade( void ) const {
	return (this->_sign_grade);
}

int	Form::getExeGrade( void ) const {
	return (this->_exe_grade);
}

bool	Form::getSigned( void ) const {
	return (this->_signed);
}

void	Form::setSigned( bool sign ) {
	this->_signed = sign;
}

void	Form::beSigned( const Bureaucrat &b ) {
	if (this->_signed == true)
	{
		std::cout << this->_name << ", someone already signed it" << std::endl;
		return ;
	}
	if (b.getGrade() > this->_sign_grade) {
		std::cout << b.getName() << " is not qualified" << std::endl;
		throw Form::GradeTooLowException();
	}
	else if (b.getGrade() <= this->_sign_grade && b.getGrade() > 0) {
		this->_signed = true;
		std::cout << b.getName() << " is a BIG RIG and has signed " << this->_name << std::endl;
	}
	else
	{
		throw Form::GradeTooHighException();
	}
	
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Brain too big to sign a lowly form");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Tiny Brain too small to sign a form");
}

std::ostream	&operator << ( std::ostream &stream, const Form &form) {
	std::cout << "Form is called " << form.getName() << std::endl;
	std::cout << "Grade to sign = " << form.getSignGrade() << std::endl;
	std::cout << "Grade to execute = " << form.getExeGrade() << std::endl;
	std::cout << "Signed = " << form.getSigned() << std::endl;
	return (stream);
}

// Form&	Form::operator=(const Form& assign) {}
