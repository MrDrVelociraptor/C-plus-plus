#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm: public Form {
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm& copy );
		~PresidentialPardonForm( void );

		PresidentialPardonForm&	operator=( const PresidentialPardonForm& assign );

		void		beSigned( const Bureaucrat &b );
		void		execute( Bureaucrat const &executor ) const;

	private:
		PresidentialPardonForm( void );


};

#endif
