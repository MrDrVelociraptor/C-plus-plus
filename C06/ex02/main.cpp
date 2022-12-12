#include "Base.hpp"

int main(void)
{
	std::cout << "\e[1;94m" << "******INSTANTIATE BASE CLASS POINTERS******" << "\e[0m" << std::endl;
	Base    *type;
	Base	*noType = new Base();

	std::cout << "\e[1;94m" << "******RANDOMLY CAST FIRST POINTER******" << "\e[0m" << std::endl;
	type = generate();
	std::cout << "\e[1;94m" << "******FIND TYPE WITH POINTER******" << "\e[0m" << std::endl;
	identify(type);
	std::cout << "\e[1;94m" << "******FIND TYPE WITH ALIAS******" << "\e[0m" << std::endl;
	identify(*type);
	std::cout << "\e[1;94m" << "******FIND INVALID TYPE WITH POINTER******" << "\e[0m" << std::endl;
	identify(noType);
	std::cout << "\e[1;94m" << "******FIND INVALID TYPE WITH ALIAS******" << "\e[0m" << std::endl;
	identify(*noType);
	delete	type;
	delete	noType;
	return (0);
}