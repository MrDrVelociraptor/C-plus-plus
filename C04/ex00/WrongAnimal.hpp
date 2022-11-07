#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal ( std::string &type );
		WrongAnimal( const WrongAnimal& copy );
		~WrongAnimal( void );

		WrongAnimal&	operator=( const WrongAnimal& assign );


		virtual void	makeSound() const;
		std::string	getType() const;

	protected:
		std::string type;

};

#endif
