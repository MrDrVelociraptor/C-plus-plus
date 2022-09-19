#include "Harl.hpp"

int	main(void)
{
	Harl	bigH;

	bigH.complain("DEBUG");
	bigH.complain("INFO");
	bigH.complain("WARNING");
	bigH.complain("ERROR");
	bigH.complain("Something else!");

	return (0);
}