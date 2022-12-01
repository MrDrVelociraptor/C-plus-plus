#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>

class Converter {
	public:
		Converter( void );
		Converter( std::string input );
		Converter( const Converter& copy );
		~Converter( void );

		char		_chary;
		int			_inty;
		bool		_isInt;
		double		_doubly;
		bool		_isDoubly;
		float		_floaty;
		bool		_isFloaty;
		std::string	_input;

		std::string	getInput( void ) const;

		void	checkInput( void );
		char	cConvert( void );
		void		cToAll( char c );
		void	checkF( void );
		// int		iConvert( std::string input );
		// double	dConvert( std::string input );
		// float	fConvert( std::string input );

		class Unconvertable: public std::exception {
			char const *what(void) const throw();
		};

		class Unprintable: public std::exception {
			char const *what(void) const throw();
		};
		
		Converter&	operator=( const Converter& assign );

	private:

};

#endif
