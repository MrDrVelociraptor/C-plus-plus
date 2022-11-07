#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal X";
	std::cout << this->type << " created" << std::endl;
}

Animal::Animal(const Animal& copy) {
	this->type = copy.type;
	std::cout << "Animal copy created" << std::endl;
}

Animal::Animal ( std::string &type ) {
	this->type = type;
	std::cout << this->type << " created" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal class destroyed" << std::endl;
}

Animal&	Animal::operator=(const Animal &copy) {
	this->type = copy.type;
	std::cout << "Animal copy operator created" << std::endl;
	return (*this);
}

void	Animal::makeSound() const{
	std::cout << this->type << " makes a generic sound" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}