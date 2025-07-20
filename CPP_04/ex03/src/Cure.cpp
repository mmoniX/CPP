/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:22:43 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/20 18:43:23 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure( void ) : AMateria()
{
	this->type = "cure";
	// std::cout << "Cure: default constructor created" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	this->type = type;
	// std::cout << "Cure: default constructor created" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	this->type = obj.type;
	// std::cout << "Cure: copy constructor created" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		this->type = obj.type;
	// std::cout << "Cure: copy assignment operator created" << std::endl;
	return *this;
}

Cure::~Cure()
{
	// std::cout << "Cure: destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
