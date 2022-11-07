#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
	Animal *all[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			all[i] = new Dog();
		else
			all[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		all[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
	{
		delete all[i];
	}
	std::cout << "\033[1;33m\033[0m**********************************" << std::endl;
	std::cout << "\033[1;33m\033[0m**********************************" << std::endl;
	std::cout << "\033[1;33m\033[0m**********************************" << std::endl;
	std::cout << "\033[1;33m\033[0m**********************************" << std::endl;
	std::cout << "\033[1;33m\033[0m**********************************" << std::endl;
	std::cout << "\033[1;33m\033[0m**********************************" << std::endl;
	std::cout << "\033[1;33m\033[0m**********************************" << std::endl;

	Cat	*c1 = new Cat();
	Cat	c2(*c1);
	Cat	c3;
	c3 = *c1;

	c1->printThought();
	std::cout << "\033[1;33m\033[0mCopies are deeeeeeep" << std::endl;
	c2.printThought();
	c3.printThought();

	delete c1;


	return (0);
}