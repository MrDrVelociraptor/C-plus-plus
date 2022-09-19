#include "HumanB.hpp"

HumanB::HumanB(std::string str) 
{
	this->name = str;
	std::cout << this->name << " is alive." << std::endl;
	return ;
}

HumanB::~HumanB(void) 
{
	std::cout << this->name << " is dead." << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weepan) 
{
		this->weapn = &weepan;
}

void	HumanB::attack(void) 
{
	std::cout << this->name << " attacks with their " << this->weapn->getType() << std::endl;
}