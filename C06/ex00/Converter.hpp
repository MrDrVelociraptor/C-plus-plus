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

		// char		*_chary;
		// int			_inty;
		// double		_doubly;
		// float		_floaty;
		std::string	_input;

		std::string	getInput( void ) const;

		void	checkInput( void );
		void	cConvert( void );
		// int		iConvert( std::string input );
		// double	dConvert( std::string input );
		// float	fConvert( std::string input );

		Converter&	operator=( const Converter& assign );

	private:

};

#endif
