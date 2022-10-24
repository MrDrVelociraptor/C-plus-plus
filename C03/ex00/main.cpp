#include "ClapTrap.hpp"


int main() {
	ClapTrap	clap("clap");
	ClapTrap	clop("clop");

	clap.getAttackDmg();
	clap.getEnergyPoints();
	clap.getHitPoints();

	clap.attack(clop.getName());
	clop.takeDamage(clap.getAttackDmg());
	clop.attack(clap.getName());
	clap.takeDamage(clop.getAttackDmg());

	return (0);

	


	
}