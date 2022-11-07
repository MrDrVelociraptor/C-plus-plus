#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
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
		void	printThought( void ) const;

	private:
		Brain	*dogBrain;

};

#endif
