#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	/* NO DATA */
}

ClapTrap::ClapTrap(std::string _name): _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(4) 
{
	std::cout << "\033[1;33m//****************SPAWN******************//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << _name << " has been created" << "     ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << _name << " has " << ClapTrap::getAttackDmg() << " attack damage" << "  ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << _name << " has " << ClapTrap::getEnergyPoints() << " energy points" << " ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << _name << " has " << ClapTrap::getHitPoints() << " hit points" << "    ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***************************************//\033[0m" << std::endl;


}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;33m//***	" << this->_name << " has been eradicated   ***//\033[0m" << std::endl;
	return ;
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
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "\033[1;31m//*************************ATTACK***************************//\033[0m" << std::endl;
		std::cout << "\033[1;31m//*** " << this->_name << " is infecting " << target << ", dealing " << ClapTrap::getAttackDmg() << " damage " << "  ***//\033[0m" << std::endl;
		this->_energyPoints -= 1;
		std::cout << "\033[1;31m//***\033[0m " << "\033[1;34m" << "Attacking costs 1 energy \033[0m" << "\033[1;31m             	         ***//\033[0m" << std::endl;
		std::cout << "\033[1;31m//***\033[0m " << "\033[1;34m" << this->_name << " has " << this->_energyPoints << " remaining" << " energy points\033[0m" << "\033[1;31m             ***//\033[0m" << std::endl;
	}
	if (this->_energyPoints == 0) {
		std::cout << "\033[1;34m//***	" << this->_name << " is out of energy " << "  ***//\033[0m" << std::endl;
		std::cout << "\033[1;34m//***	" << this->_name << " is shutting down " << "  ***//\033[0m" << std::endl;
		delete (this);
		return ;
	}
	std::cout << "\033[1;31m//**********************************************************//\033[0m" << std::endl;

}

void	ClapTrap::takeDamage( unsigned int amount) {
	std::cout << "\033[1;32m//********************DAMAGE*******************//\033[0m" << std::endl;
	std::cout << "\033[1;32m//***	" << this->_name << " has " << this->_hitPoints << " hit points left " << "      ***//\033[0m" << std::endl;

	std::cout << "\033[1;32m//***	" << this->_name << " takes " << amount << " damage " << "            ***//\033[0m" << std::endl;
	this->_hitPoints -= amount;
	std::cout << "\033[1;32m//***	" << this->_name << " has " << this->_hitPoints << " hit points left" << "     ***//\033[0m" << std::endl;
	if (this->_hitPoints <= 0) {
		std::cout << "\033[1;32m " << this->_name << " has succumbed to infection 3...2...1 💥\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[1;32m//*********************************************//\033[0m" << std::endl;	

}

void	ClapTrap::beRepaired( unsigned int amount) {
	if (this->_hitPoints > 0) {
		std::cout << "\033[1;35m//********************REPAIR*******************//\033[0m" << std::endl;	
		std::cout << "\033[1;35m//***	\033[0m" << "\033[1;32m" << this->_name << " is breeding heals " << amount << " HP" << "\033[1;35m     ***//\033[0m" << std::endl;
		this->_hitPoints += amount;
		std::cout << "\033[1;35m//***	\033[0m" << "\033[1;32m" << this->_name << " has " << this->_hitPoints << " hit points left" << "\033[1;35m      ***//\033[0m" <<std::endl;
		std::cout << "\033[1;35m//*********************************************//\033[0m" << std::endl;	
	}
}

