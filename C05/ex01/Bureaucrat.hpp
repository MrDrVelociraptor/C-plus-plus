#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat {
	public:
		Bureaucrat( int grade );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &copy );
		~Bureaucrat( void );

		Bureaucrat &operator=( const Bureaucrat& assign );
		Bureaucrat &operator++( int );
		Bureaucrat &operator--( int );

		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		signForm( Form &form);

		class GradeTooHighException: public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw();
		};
	private:
		std::string const	_name;
		int					_grade;

};

std::ostream	&operator << ( std::ostream &stream, const Bureaucrat &bur );

#endif
