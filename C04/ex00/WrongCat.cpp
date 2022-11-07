#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "Wrong Cat";
	std::cout << this->type << ", it's ALIVE" << std::endl;
}

WrongCat::WrongCat ( std::string &type ) {
	this->type = type;
	std::cout << this->type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
	*this = copy;
	std::cout << "Wrong Cat copy created" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << this->type << " is no more" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& copy) {
	this->type = copy.type;
	std::cout << "Wrong Cat copy operator created" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const{
	if (system("./wrong.sh") == 0)
		std::cout << this->type << " made a sound" << std::endl;
}