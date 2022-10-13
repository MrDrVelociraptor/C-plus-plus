#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "You've got the Clap, its name is " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "You've been cured of the Clap" << std::endl;

}

void	attack( const std::string& target) {
	std::cout << "The Clap is infecting " << target << ", dealing " << _attackDamage <<  std::endl;

}

void	takeDamage( unsigned int amount) {

}

void	beRepaired( unsigned int amount) {

}