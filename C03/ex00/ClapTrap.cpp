#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(4) 
{
	std::cout << "You've got the Clap, its name is " << _name << std::endl;
	std::cout << _name << " has " << ClapTrap::getAttackDmg() << " attack damage" << std::endl;
	std::cout << _name << " has " << ClapTrap::getEnergyPoints() << " energy points" << std::endl;
	std::cout << _name << " has " << ClapTrap::getHitPoints() << " hit points" << std::endl;


}

ClapTrap::~ClapTrap()
{
	std::cout << "The antibiotics have defeated " << this->_name << std::endl;

}

ClapTrap* buildClap(std::string _name) {
	ClapTrap	*newClap = new ClapTrap(_name);
	return (newClap);
}

std::string	ClapTrap::getName( void ) const {
	return (this->_name);
}

int	ClapTrap::getHitPoints ( void ) const {
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints ( void ) const {
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDmg ( void ) const {
	return (this->_attackDamage);
}

void	ClapTrap::attack( const std::string& target) {
	std::cout << "//*************ATTACK****************\\ " << this->_name << " is infecting " << target << ", dealing " << ClapTrap::getAttackDmg() << " damage" << std::endl;
	this->_energyPoints -= 1;
	std::cout << this->_name << " has " << this->_energyPoints << " remaining" << " energy points" << std::endl;

}

void	ClapTrap::takeDamage( unsigned int amount) {
	std::cout << "//*************DAMAGE****************\\ " << this->_name << " is having an adverse reaction to antibiotics causing " << amount << " damage" << std::endl;
	this->_hitPoints -= amount;
	std::cout << this->_name << " has " << this->_hitPoints << " hit points left" <<std::endl;
	 

}

void	ClapTrap::beRepaired( unsigned int amount) {
	std::cout << "//*************REPAIR****************\\ " << this->_name << " is breeding heals " << amount << " HP" << std::endl;
	this->_hitPoints += amount;
	std::cout << this->_name << " has " << this->_hitPoints << " hit points left" <<std::endl;
}

