#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "Harl has been created." << std::endl;
	return ;
}

Harl::~Harl( void )
{
	std::cout << "Harl has been destroyed." << std::endl;
	return ;
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my " <<
	"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << 
	std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. " <<
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be " <<
	"asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." <<
	" I’ve been coming for years whereas you started working here since" <<
	" last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*functions[]) (void) ={
		&Harl::debug, 
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};
	std::string		matches[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	unsigned long	index = std::distance(matches,
		std::find(matches, matches + sizeof(matches) / sizeof(matches[0]),
		level));

	std::cout << "[ " << level << " ]" << std::endl;
	if (index < sizeof(functions) / sizeof(functions[0]))
	{
		(this->*functions[index])();
	}
	else
	{
		std::cout << "Harl doesn't know what to complain about!" << std::endl;
	}
	std::cout << std::endl;
}