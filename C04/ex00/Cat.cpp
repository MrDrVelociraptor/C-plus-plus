#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << this->type << " created" << std::endl;
}

Cat::Cat(const Cat& copy) {
	*this = copy;
	std::cout << "Cat copy created" << std::endl;
}

Cat::~Cat() {
	std::cout << this->type << " is no more" << std::endl;
}

Cat&	Cat::operator=(const Cat& copy) {
	this->type = copy.type;
	std::cout << "Cat copy operator created" << std::endl;
	return (*this);
}

void	Cat::makeSound() const{
	if (system("./cat.sh") == 0)
		std::cout << this->type << " made a sound" << std::endl;
}

