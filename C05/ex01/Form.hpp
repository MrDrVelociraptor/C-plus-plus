#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
	public:
		Form( std::string name, int sign_grade, int exe_grade );
		Form( const Form& copy );
		~Form( void );

		std::string	getName( void ) const;
		int			getGrade( void ) const;
		int			getSignGrade( void ) const;
		int			getExeGrade( void ) const;
		bool		getSigned( void ) const;
		void		setSigned( bool sign );
		void		beSigned( const Bureaucrat &b );
		void		signForm();

		class GradeTooHighException: public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw();
		};

	private:
		Form( void );
		std::string const 	_name;
		bool				_signed;
		int					_sign_grade;
		int					_exe_grade;

		Form&	operator=( const Form& assign );

};

std::ostream	&operator << ( std::ostream &stream, const Form &form );

#endif
