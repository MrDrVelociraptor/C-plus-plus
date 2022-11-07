#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog: public Animal{
	public:
		Dog( void );
		Dog( const Dog& copy );
		~Dog( void );

		Dog&	operator=( const Dog& assign );

		void	makeSound() const;

	private:

};

#endif
