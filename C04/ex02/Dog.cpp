#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->dogBrain = new Brain();
	std::cout << this->type << " created" << std::endl;
}

Dog::Dog(const Dog& copy) {
	*this = copy;
	*(this->dogBrain) = *(copy.dogBrain);
	std::cout << "Dog copy created" << std::endl;
}

Dog::~Dog() {
	delete this->dogBrain;

	std::cout << this->type << " is no more" << std::endl;
}

Dog&	Dog::operator=(const Dog &copy) {
	this->type = copy.type;
	*(this->dogBrain) = *(copy.dogBrain);

	std::cout << "Cat copy operator created" << std::endl;
	return (*this);
}

void	Dog::makeSound() const{
	if (system("./dog.sh") == 0)
		std::cout << this->type << " made a sound" << std::endl;

}

void	Dog::printThought( void ) const {
	int	i = rand() % 100;
	std::cout << this->type << " is thinking about ";
	this->dogBrain->randomThought(i);
	std::cout << "!" << std::endl;
}