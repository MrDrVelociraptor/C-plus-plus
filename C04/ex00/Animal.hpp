#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

class Animal {
	public:
		Animal( void );
		Animal( std::string &type );
		Animal( const Animal& copy );
		~Animal( void );

		Animal&	operator=( const Animal& assign );

		virtual void	makeSound() const;
		std::string	getType() const;

	protected:
		std::string type;

};

#endif
