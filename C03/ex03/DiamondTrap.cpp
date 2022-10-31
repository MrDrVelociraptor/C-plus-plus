#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap() 
{
	this->_name = ClapTrap::_name;
	this->_attackDamage = FragTrap::getAttackDmg();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_hitPoints = FragTrap::getHitPoints();
	std::cout << "\033[1;33m//****************SPAWN******************//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has been upgraded" << "     ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_attackDamage << " attack damage" << "  ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_energyPoints << " energy points" << " ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_hitPoints << " hit points" << "    ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***************************************//\033[0m" << std::endl;
}