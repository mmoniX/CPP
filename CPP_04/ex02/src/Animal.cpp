/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:36:49 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 14:02:14 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

A_Animal::A_Animal( void ) : type("Unknown")
{
	std::cout << "A_Animal: default constructor created" << std::endl; 
}

A_Animal::A_Animal( std::string atype) : type(atype)
{
	std::cout << "A_Animal: constructor created with type: " << atype << std::endl;
}

A_Animal::A_Animal( const A_Animal &obj) : type(obj.type)
{
	std::cout << "A_Animal: copy constructor created" << std::endl;
}
A_Animal &A_Animal::operator=( const A_Animal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "A_Animal: copy assignment operator created" << std::endl;
	return *this;
}

A_Animal::~A_Animal()
{
	std::cout << "A_Animal: destructor called" << std::endl;
}

std::string A_Animal::getType( void ) const
{
	return type;
}
