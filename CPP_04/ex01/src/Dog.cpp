/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:00:20 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/16 18:25:05 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ) : Animal()
{
	type = "Dog";
	dogbrain = new Brain();
	std::cout << "Dog: default constructor created" << std::endl; 
}

Dog::Dog( std::string dtype ) : Animal(dtype)
{
	type = dtype;
	dogbrain = new Brain();
	std::cout << "Dog: constructor created with type: " << dtype << std::endl;
}

Dog::Dog( const Dog &obj ) : Animal( obj )
{
	// *this = obj;
	dogbrain = new Brain(*obj.dogbrain);
	std::cout << "Dog: copy constructor created" << std::endl;
}
Dog &Dog::operator=( const Dog &obj )
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		if (dogbrain)
			delete dogbrain;
		dogbrain = new Brain(*obj.dogbrain);
		// this->type = obj.type;
	}
	std::cout << "Dog: copy assignment operator created" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete dogbrain;
	std::cout << "Dog: destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "gheu gheu..." << std::endl;
}

Brain* Dog::getBrain( void )
{
	return (dogbrain);
}
