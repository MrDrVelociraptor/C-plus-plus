#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	// const Animal* aminal = new Animal();
	const Animal *c = new Cat();
	const Animal *d = new Dog();
	const WrongAnimal *e = new WrongCat();

	c->makeSound();
	d->makeSound();
	e->makeSound();

	return (0);
}