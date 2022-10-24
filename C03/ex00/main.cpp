#include "ClapTrap.hpp"


int main() {
	ClapTrap	clap("clap");
	ClapTrap	clop("clop");

	clap.attack(clop.getName());
	clop.takeDamage(clap.getAttackDmg());
	clop.attack(clap.getName());
	clap.takeDamage(clop.getAttackDmg());

	return (0);

	


	
}