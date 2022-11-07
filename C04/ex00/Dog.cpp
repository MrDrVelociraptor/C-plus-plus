#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << this->type << " created" << std::endl;
}

Dog::Dog(const Dog& copy) {
	*this = copy;
	std::cout << "Dog copy created" << std::endl;
}

Dog::~Dog() {
	std::cout << this->type << " is no more" << std::endl;
}

Dog&	Dog::operator=(const Dog &copy) {
	this->type = copy.type;
	std::cout << "Cat copy operator created" << std::endl;
	return (*this);
}

void	Dog::makeSound() const{
	if (system("./dog.sh") == 0)
		std::cout << this->type << " made a sound" << std::endl;

}