#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form::Form("Shrubbery Creation Form", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): Form::Form("Shrubbery Creation Form", 145, 137) {
	this->_target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "SCF has been deleted" << std::endl;

}

void ShrubberyCreationForm::beSigned( const Bureaucrat &b ) {
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



void ShrubberyCreationForm::execute( Bureaucrat const &executor ) const {
	std::string file = this->_target + ".txt"; 
	std::ofstream trees;
	std::cout << executor.getName() << " has a grade of " << executor.getGrade() << std::endl;
	std::cout << "And " << this->getExeGrade() << " is the  exe grade of the form" << std::endl;

	if (executor.getGrade() <= this->getExeGrade()) {
		trees.open (file);
		trees << "    /|\"" << std::endl;
		trees << "   / | \"" << std::endl;
		trees << "  /  |  \"" << std::endl;
		trees << " /   |   \"" << std::endl;
		trees << "-----|-----"<< std::endl;
		trees << "     |"<< std::endl;
		trees << "     |"<< std::endl;

		trees.close();
		std::cout << _target << " written to file" << std::endl;
	}
}

// ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& assign) {}
