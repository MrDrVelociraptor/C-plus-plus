#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "Animal X";
	std::cout << this->type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	this->type = copy.type;
	std::cout << "Animal copy created" << std::endl;
}

WrongAnimal::WrongAnimal ( std::string &type ) {
	this->type = type;
	std::cout << this->type << " created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Animal class destroyed" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& copy) {
	this->type = copy.type;
	std::cout << "Animal copy operator created" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const{
	std::cout << this->type << " makes a generic sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}