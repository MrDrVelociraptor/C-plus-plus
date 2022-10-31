#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	this->_name = "Big Scav";
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	std::cout << "\033[1;33m//****************SPAWN************************//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has been upgraded to FragTrap" << "     ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_attackDamage << " attack damage" << "          ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_energyPoints << " energy points" << "         ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_hitPoints << " hit points" << "            ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***************************************//\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	std::cout << "\033[1;33m//****************SPAWN*******************************//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has been upgraded to FragTrap" << "     ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_attackDamage << " attack damage" << "              ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_energyPoints << " energy points" << "              ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//***	" << this->_name << " has " << this->_hitPoints << " hit points" << "                ***//\033[0m" << std::endl;
	std::cout << "\033[1;33m//****************************************************//\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;33m//***	" << this->_name << " has finished scavenging  ***//\033[0m" << std::endl;
	return ;
}

FragTrap* buildFrag(std::string _name) {
	FragTrap	*newFrag = new FragTrap(_name);
	return (newFrag);
}

void	FragTrap::attack( const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "\033[1;31m//*************************ATTACK***************************//\033[0m" << std::endl;
		std::cout << "\033[1;31m//*** " << this->_name << " SCAVATTACKS " << target << ", dealing " << this->_attackDamage << " damage " << "  ***//\033[0m" << std::endl;
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

FragTrap	&FragTrap::operator=( const FragTrap &copy ) {

	std::cout << "*************************************************" << std::endl;
	std::cout << "FragTrap Copy Created!" << std::endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDmg();
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "Hit points : " << this->_hitPoints << std::endl;
	std::cout << "Energy points : " << this->_energyPoints << std::endl;
	std::cout << "Attack damage : " << this->_attackDamage << std::endl;
	std::cout << "*************************************************" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys( void ) {
	std::cout << this->_name << " wants a high five"<< std::endl;
}