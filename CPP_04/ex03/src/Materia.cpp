/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:22:47 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 16:47:12 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Materia.hpp"

AMateria::AMateria( void )
{
	this->type = "DEF";
	std::cout << "AMateria: default constructor created" << std::endl;
}

AMateria::AMateria( std::string const & type )
{
	this->type = type;
	std::cout << "AMateria: constructor created" << std::endl;
}

AMateria::AMateria( const AMateria &obj )
{
	this->type = obj.type;
	std::cout << "AMateria: copy constructor created" << std::endl;
}

AMateria &AMateria::operator=( const AMateria &obj )
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "AMateria: copy assignment operator created" << std::endl;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria: destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
