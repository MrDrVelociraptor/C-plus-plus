#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "You've got the Clap, its name is " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "You've been cured of the Clap" << std::endl;

}

std::string	ClapTrap::getName( void ) const {
	return (this->_name);
}

int	ClapTrap::getHitPoints ( void ) const {
	std::cout << this->_name << " has " << this->_hitPoints << " HP" << std::endl;
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints ( void ) const {
	std::cout << this->_name << " has " << this->_energyPoints << " EP" << std::endl;

	return (this->_energyPoints);
}

int	ClapTrap::getAttackDmg ( void ) const {
	std::cout << this->_name << " has " << this->_attackDamage << " attack damage" << std::endl;

	return (this->_attackDamage);
}

void	ClapTrap::attack( const std::string& target) {
	std::cout << "The Clap is infecting " << target << ", dealing " << ClapTrap::getAttackDmg() <<  std::endl;

}

void	ClapTrap::takeDamage( unsigned int amount) {
	std::cout << "The Clap, " << this->_name << " is having an adverse reaction to antibiotics causing  " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount) {
	std::cout << "The Clap, " << this->_name << " is taking antiboitics and heals " << amount << " HP" << std::endl;

}