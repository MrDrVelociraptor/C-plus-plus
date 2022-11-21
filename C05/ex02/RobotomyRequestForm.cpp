#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form::Form("Robotomy Request Form", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): Form::Form("Robotomy Request Form", 72, 45) {
	this->_target = copy.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RRF has been deleted" << std::endl;
}

void RobotomyRequestForm::beSigned( const Bureaucrat &b ) {
	int	bGrade = b.getGrade();
	int signGrade = this->getSignGrade();
	std::cout << this->getName() << " has a sign grade of " << signGrade << std::endl;

	if (this->getSigned() == true) {
		std::cout << this->getName() << " has already been signed, Bureaucrats suck at communicating" << std::endl;
		if (bGrade > signGrade)
			std::cout << b.getName() << "'s grade was to low, so it didn't matter anyways" << std::endl;
		return ;
	}
	if (bGrade <= signGrade)
		this->setSigned(true);
	else
		throw Form::GradeTooLowException();	
	
}



void RobotomyRequestForm::execute( Bureaucrat const &executor ) const {
	srand(time(NULL));
	int x = rand() % 2 + 1;

	std::cout << executor.getName() << " has a grade of " << executor.getGrade() << " And " << this->getExeGrade() << " is the execute grade of the form" << std::endl;
	if (executor.getGrade() <= this->getExeGrade()) {
		if (x == 1)
			std::cout << "Form signed . . . Drilling noises . . . . clunk, brrrrr, wuurrrrr " << this->getName() << " has been robotomized" << std::endl;
		if (x == 2)
			std::cout << "Form signed . . . Drilling noises . . . . clunk, brrrrr, wuurrrrr " << this->getName() << " has failed robotomization" << std::endl;	
	}
	else
	{
		std::cout << this->getName() << " was not signed" << std::endl;
	}
	
}

// RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& assign) {}
