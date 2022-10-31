#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	private:

	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &copy );
		~FragTrap( void );

		FragTrap	&operator=( const FragTrap &copy );

		void	attack(const std::string& target);
		void	highFivesGuys( void );
};

FragTrap* buildFrag(std::string _name);


#endif