#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weepan): name(name), weapn(&weepan)
{
    std::cout << this->name << " is alive and weilding " << weapn->getType() << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << this->name << " is dead" <<std::endl;
	return ;
}

void	HumanA::setWeapon(Weapon &weepan)
{
	this->weapn = &weepan;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " is attacking with " << weapn->getType() << std::endl;
}