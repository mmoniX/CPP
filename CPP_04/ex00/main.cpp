/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:15:09 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/15 17:39:28 by mmonika          ###   ########.fr       */
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
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	// const WrongAnimal* wa = new WrongAnimal();
	// const WrongAnimal* wi = new WrongCat();
	// std::cout << wi->getType() << " " << std::endl;
	// wi->makeSound();
	// wa->makeSound();

	delete meta;
	delete i;
	delete j;
	// delete wi;
	// delete wa;

	return (0);
}
