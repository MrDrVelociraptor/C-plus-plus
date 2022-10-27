#include "ClapTrap.hpp"

int main() {
	std::string name1 = "CLAP";
	std::string name2 = "CLOP";


	ClapTrap	*clap = buildClap(name1);
	std::cout << "//*****************************\\" << std::endl;
	ClapTrap	*clop = buildClap(name2);
	std::cout << "//*****************************\\" << std::endl;

	srand(time(NULL));
	
	while ((clap->getEnergyPoints() > 0 && clap->getHitPoints() > 0) || (clop->getEnergyPoints() > 0 && clop->getHitPoints() > 0))
	{	
		int x = rand() % 2 + 1;
		int y = rand() % 2 + 1;
		if (x == 1) {
			if (clap->getEnergyPoints() > 0)
			{
				clap->attack(clop->getName());
				clop->takeDamage(clap->getAttackDmg());
			}
		}
		if (x == 2)
			clap->beRepaired(3);
		if (y == 1) {
			if (clop->getEnergyPoints() > 0)
			{
				clop->attack(clap->getName());
				clap->takeDamage(clop->getAttackDmg());
			}
		}
		if (y == 2)
			clop->beRepaired(3);
		if (clap->getEnergyPoints() <= 0) {
			std::cout << clap->getName() << " is out of energy and needs to shutdown, BYE" << std::endl;
			delete(clap);
			return (0);
		}
		if (clap->getHitPoints() <= 0) {
			std::cout << clap->getName() << " 3...2...1 💥" << std::endl;
			delete(clap);
			return (0);
		}
		if (clop->getEnergyPoints() <= 0) {
			std::cout << clop->getName() << " is out of energy and needs to shutdown, BYE" << std::endl;
			delete(clap);
			return (0);
		}
		if (clop->getHitPoints() <= 0) {
			std::cout << clop->getName() << " 3...2...1 💥" << std::endl;
			delete(clap);
			return (0);
		}
	}

	std::cout << "Turns out we both die anyway buddy ol pal" << std::endl;
	return (0);
}