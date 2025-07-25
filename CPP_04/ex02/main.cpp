#include "inc/Animal.hpp"
#include "inc/Cat.hpp"
#include "inc/Dog.hpp"
#define SIZE 2

// int main( void )
// {
// 	std::cout << "\n---Basic Tests---\n" << std::endl;
// 	const AAnimal* j = new Dog();
// 	const AAnimal* i = new Cat();
// 	delete j;
// 	delete i;

// 	std::cout << "\n---Array Tests---\n" << std::endl;
// 	AAnimal	*animals[SIZE];
// 	for(int a = 0; a < SIZE/2; a++)
// 		animals[a] = new Dog();
// 	for(int a = SIZE/2; a < SIZE; a++)
// 		animals[a] = new Cat();
// 	for(int a = 0; a < SIZE; a++)
// 		delete animals[a];

// 	std::cout << "\n---Deep copy Tests---\n" << std::endl;
// 	Dog *dog1 = new Dog();
// 	Dog dog3;
// 	Dog dog2(*dog1);

// 	dog1->getBrain()->setIdea("what is this hooman doing!!!!");
// 	dog3 = *dog1;
// 	std::cout << "dog1 idea: " << dog1->getBrain()->getIdea() << std::endl;
// 	std::cout << "dog2 idea: " << dog2.getBrain()->getIdea() << std::endl;
// 	std::cout << "dog3 idea: " << dog3.getBrain()->getIdea() << std::endl;
// 	delete (dog1);
// 	std::cout << "dog2 idea: " << dog2.getBrain()->getIdea() << std::endl;
// 	std::cout << "dog3 idea: " << dog3.getBrain()->getIdea() << std::endl;
// 	return (0);
// }

int main( void )
{
	std::cout << "\n---Creating animals---\n" << std::endl;
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	// std::cout << "Type: " << meta->getType() << std::endl;
	std::cout << "Type: " << j->getType() << std::endl;
	std::cout << "Type: " << i->getType() << std::endl;

	// meta->makeSound();
	j->makeSound();
	i->makeSound();

	// delete meta;
	delete j;
	delete i;

	return (0);
}
