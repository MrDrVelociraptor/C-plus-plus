#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string	_name;

	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &copy );
		~DiamondTrap( void );

		DiamondTrap	&operator=( const DiamondTrap &copy );

		void	whoAmI();
};

DiamondTrap* buildDai(std::string _name);


#endif