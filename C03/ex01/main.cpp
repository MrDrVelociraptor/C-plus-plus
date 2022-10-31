#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main() {
	std::string villanClap = "EVILCLAP";
	std::string heroScav = "GOODCLAP";

	ScavTrap	*clap = buildScav(villanClap);
	ScavTrap	*clop = buildScav(heroScav);

	srand(time(NULL));
	
	clop->guardGate();
	clap->guardGate();
	
	while ((clap->getEnergyPoints() > 0 && clap->getHitPoints() > 0) && (clop->getEnergyPoints() > 0 && clop->getHitPoints() > 0))
	{	
		int x = rand() % 2 + 1;
		int y = rand() % 2 + 1;
		if (x == 1) {
			if (clap->getEnergyPoints() > 0 && clap->getHitPoints() > 0)
			{
				clap->attack(clop->getName());
				clop->takeDamage(clap->getAttackDmg());
			}
		}
		if (x == 2)
			clap->beRepaired(3);
		if (y == 1) {
			if (clop->getEnergyPoints() > 0 && clop->getHitPoints() > 0)
			{
				clop->attack(clap->getName());
				clap->takeDamage(clop->getAttackDmg());
			}
		}
		if (y == 2)
			clop->beRepaired(3);
	}
	delete(clap);
	delete(clop);
	return (0);
}