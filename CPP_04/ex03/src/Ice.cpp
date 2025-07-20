/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:58:42 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/20 18:43:45 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice( void ) : AMateria()
{
	this->type = "ice";
	// std::cout << "Ice: default constructor created" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	this->type = type;
	// std::cout << "Ice: default constructor created" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	this->type = obj.type;
	// std::cout << "Ice: copy constructor created" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		this->type = obj.type;
	// std::cout << "Ice: copy assignment operator created" << std::endl;
	return *this;
}

Ice::~Ice()
{
	// std::cout << "Ice: destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
