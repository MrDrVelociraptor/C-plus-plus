#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->catBrain = new Brain();
	std::cout << this->type << " created" << std::endl;
}

Cat::Cat(const Cat& copy): catBrain(new Brain()) {
	*this = copy;
	*(this->catBrain) = *(copy.catBrain);
	std::cout << "Cat copy created" << std::endl;
}

Cat::~Cat() {
	delete this->catBrain;
	std::cout << this->type << " is no more" << std::endl;
}

Cat&	Cat::operator=(const Cat& copy) {
	this->type = copy.type;
	*(this->catBrain) = *(copy.catBrain);
	std::cout << "Cat copy operator created" << std::endl;
	return (*this);
}

void	Cat::makeSound() const{
	if (system("./cat.sh") == 0)
		std::cout << this->type << " made a sound" << std::endl;
}

void	Cat::printThought( void ) const {
	int	i = rand() % 100;
	std::cout << this->type << " is thinking about ";
	this->catBrain->randomThought(i);
	std::cout << "!" << std::endl;
}