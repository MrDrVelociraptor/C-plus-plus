#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat: public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat ( std::string &type );
		WrongCat( const WrongCat& copy );
		~WrongCat( void );

		WrongCat&	operator=( const WrongCat& assign );

		void	makeSound() const;

	private:

};

#endif
