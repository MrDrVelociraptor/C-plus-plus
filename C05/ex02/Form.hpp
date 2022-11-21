#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
	public:
		Form( std::string name, int sign_grade, int exe_grade );
		Form( const Form& copy );
		virtual ~Form( void );

		virtual std::string	getName( void ) const;
		virtual int			getSignGrade( void ) const;
		virtual int			getExeGrade( void ) const;
		virtual bool		getSigned( void ) const;
		virtual void		setSigned( bool sign );
		virtual void		beSigned( const Bureaucrat &b );

		class GradeTooHighException: public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw();
		};

	protected:
		std::string 	_target;
		std::string	getTarget( void ) const;
		void		setTarget( std::string target );

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
