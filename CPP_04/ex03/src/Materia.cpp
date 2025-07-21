/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:22:47 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/20 18:44:03 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Materia.hpp"

AMateria::AMateria( void ) : type("DEF") {}

AMateria::AMateria( std::string const & type ) : type(type) {}

AMateria::AMateria( const AMateria &obj ) : type(obj.type) {}

AMateria &AMateria::operator=( const AMateria &obj )
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
