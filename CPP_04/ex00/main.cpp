/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:15:09 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/16 13:13:47 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Cat.hpp"
#include "inc/Dog.hpp"
#include "inc/WrongAnimal.hpp"
#include "inc/WrongCat.hpp"

int main( void )
{
	std::cout << "\n---Creating animals---\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Type: " << meta->getType() << std::endl;
	std::cout << "Type: " << j->getType() << std::endl;
	std::cout << "Type: " << i->getType() << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();

	delete meta;
	delete j;
	delete i;
	
	std::cout << "\n---Creating wrong animals---\n" << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();
	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	wa->makeSound();
	delete wi;
	delete wa;
	return (0);
}
