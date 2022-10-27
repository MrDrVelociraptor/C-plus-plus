#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class ClapTrap
{
private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;


public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap &copy );
	~ClapTrap();

	std::string	getName ( void ) const;

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	int	getHitPoints ( void ) const;
	int	getEnergyPoints ( void ) const;
	int	getAttackDmg ( void ) const;

};

ClapTrap* buildClap(std::string _name);




#endif