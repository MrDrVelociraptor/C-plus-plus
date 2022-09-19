#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string name)
{
	this->setType(name);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string	const	&Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}