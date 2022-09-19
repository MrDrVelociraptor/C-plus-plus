#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
	std::string	name;
	Weapon		*weapn;

	public:
	
	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon &weepan);
	void	attack();
};

#endif

