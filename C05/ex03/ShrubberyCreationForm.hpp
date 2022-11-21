#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "Form.hpp"


class ShrubberyCreationForm: public Form {
	public:
		ShrubberyCreationForm( std::string target );

		ShrubberyCreationForm( const ShrubberyCreationForm& copy );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& assign );

		void		beSigned( const Bureaucrat &b );
		void		execute( Bureaucrat const &executor ) const;

	private:
		ShrubberyCreationForm( void );


};

#endif
