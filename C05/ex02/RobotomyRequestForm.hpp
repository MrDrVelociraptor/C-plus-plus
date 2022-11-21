#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"


class RobotomyRequestForm: public Form {
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& copy );
		~RobotomyRequestForm( void );

		RobotomyRequestForm&	operator=( const RobotomyRequestForm& assign );

		void		beSigned( const Bureaucrat &b );
		void		execute( Bureaucrat const &executor ) const;

	private:
		RobotomyRequestForm( void );


};

#endif
