/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:45:51 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/16 12:47:57 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("Wrong")
{
	std::cout << "WrongAnimal: default constructor created" << std::endl; 
}

WrongAnimal::WrongAnimal( std::string atype) : type(atype)
{
	std::cout << "WrongAnimal: constructor created with type: " << atype << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj) : type(obj.type)
{
	std::cout << "WrongAnimal: copy constructor created" << std::endl;
}
WrongAnimal &WrongAnimal::operator=( const WrongAnimal &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "WrongAnimal: copy assignment operator created" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return type;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal is making noise" << std::endl;
}
