/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:53:27 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 18:04:36 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat( void ) : AAnimal()
{
	type = "Cat";
	catbrain = new Brain();
	std::cout << "Cat: default constructor created" << std::endl; 
}

Cat::Cat( std::string ctype ) : AAnimal(ctype)
{
	type = ctype;
	catbrain = new Brain();
	std::cout << "Cat: constructor created with type: " << ctype << std::endl;
}

Cat::Cat( const Cat &obj ) : AAnimal( obj )
{
	// *this = obj;
	catbrain = new Brain(*obj.catbrain); //deep copy ???
	std::cout << "Cat: copy constructor created" << std::endl;
}

Cat &Cat::operator=( const Cat &obj )
{
	if (this != &obj)
	{
		AAnimal::operator=(obj);
		if (catbrain)
			delete catbrain;
		catbrain = new Brain(*obj.catbrain);
		// this->type = obj.type;
	}
	std::cout << "Cat: copy assignment operator created" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete catbrain;
	std::cout << "Cat: destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "meeeaaaowww...." << std::endl;
}

Brain* Cat::getBrain( void )
{
	return (catbrain);
}
