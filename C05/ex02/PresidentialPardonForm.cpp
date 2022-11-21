#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form::Form("Presidential Pardon Form", 25, 5) {
	this->_target = target;
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): Form::Form("PPF", 25, 5) {
	this->_target = copy.getTarget();

}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PPF has been deleted" << std::endl;

}

void PresidentialPardonForm::beSigned( const Bureaucrat &b ) {
	int	bGrade = b.getGrade();
	int signGrade = this->getSignGrade();
	std::cout << this->getName() << " has a sign grade of " << signGrade << std::endl;

	if (this->getSigned() == true) {
		std::cout << this->getName() << " has already been signed, Bureaucrats suck at communicating" << std::endl;
		if (bGrade > signGrade)
			std::cout << b.getName() << "'s grade was to low, so it didn't matter anyways" << std::endl;
		return ;
	}
	if (bGrade <= signGrade) {
		std::cout << b.getName() << " has signed " << this->getName() << std::endl;
		this->setSigned(true);
	}
	else
		throw Form::GradeTooLowException();	
	
}



void PresidentialPardonForm::execute( Bureaucrat const &executor ) const {
	std::cout << executor.getName() << " has a grade of " << executor.getGrade() << std::endl;
	std::cout << "And " << this->getExeGrade() << " is the  exe grade of the form" << std::endl;

	if (executor.getGrade() <= this->getExeGrade()) {
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else {
		std::cout << _target << " You suck" << std::endl;
		
	}
	
}

// PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& assign) {}
