/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:15:09 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/15 16:06:57 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Cat.hpp"
#include "inc/Dog.hpp"

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return (0);
}

// int main(void)
// {
// 	std::cout << "\n--- " << "Basic Polymorphic Behavior" << " ---\n" << std::endl;
// 	const Animal* a = new Animal();
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();

// 	std::cout << "Type (Dog): " << dog->getType() << std::endl;
// 	std::cout << "Type (Cat): " << cat->getType() << std::endl;

// 	dog->makeSound();
// 	cat->makeSound();
// 	a->makeSound();

// 	delete a;
// 	delete dog;
// 	delete cat;

// 	std::cout << "\n--- " << "Default Constructor Checks" << " ---\n" << std::endl;
// 	Dog d1;
// 	Cat c1;

// 	std::cout << "\n--- " << "Copy Constructor Checks" << " ---\n" << std::endl;
// 	Dog d2(d1);
// 	Cat c2(c1);

// 	std::cout << "\n--- " << "Copy Assignment Operator" << " ---\n" << std::endl;
// 	Dog d3;
// 	d3 = d2;
// 	Cat c3;
// 	c3 = c2;

// 	std::cout << "\n--- " << "Self-Assignment Check" << " ---\n" << std::endl;
// 	d3 = d3;
// 	c3 = c3;

// 	std::cout << "\n--- " << "Animal Array with Polymorphism" << " ---\n" << std::endl;
// 	const int size = 4;
// 	Animal* zoo[size];

// 	for (int i = 0; i < size; ++i) {
// 		if (i % 2 == 0)
// 			zoo[i] = new Dog();
// 		else
// 			zoo[i] = new Cat();
// 	}

// 	for (int i = 0; i < size; ++i) {
// 		zoo[i]->makeSound();
// 	}

// 	for (int i = 0; i < size; ++i) {
// 		delete zoo[i];
// 	}

// 	std::cout << "\n--- " << "End of Tests" << " ---\n" << std::endl;

// 	return 0;
// }