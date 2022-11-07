#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	public:
		Brain( void );
		Brain( const Brain& copy );
		~Brain( void );

		Brain&	operator=( const Brain& assign );

		void	randomThought( int index ) const;

	private:

		std::string _ideas[100];
};

#endif
