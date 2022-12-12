#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include <math.h>


#define MAX 2147483647
#define MIN -2147483648


class Converter {
	public:
		Converter( void );
		Converter( std::string input );
		Converter( const Converter& copy );
		~Converter( void );

		char		_chary;
		int			_inty;
		double		_doubly;
		float		_floaty;

		std::string	_input;

		bool	goodPut( void );
		std::string	getInput( void ) const;

		// void	checkInput( void );
		// void	checkFD( int n );
		
		double	dConvert( void );
		float	fConvert( void );
		int		iConvert( void );
		char	cConvert( void );
		

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