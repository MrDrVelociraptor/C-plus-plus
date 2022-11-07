#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat: public Animal {
	public:
		Cat( void );
		Cat( const Cat& copy );
		~Cat( void );

		Cat&	operator=( const Cat& assign );

		void	makeSound() const;


	private:

};

#endif
