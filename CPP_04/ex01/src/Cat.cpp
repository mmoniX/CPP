/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:53:27 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/15 14:59:31 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat: default constructor created" << std::endl; 
}

Cat::Cat( std::string ctype) : Animal("Cat")
{
	std::cout << "Cat: constructor created with type: " << ctype << std::endl;
}

Cat::Cat( const Cat &obj) : Animal( obj )
{
	std::cout << "Cat: copy constructor created" << std::endl;
}
Cat &Cat::operator=( const Cat &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "Cat: copy assignment operator created" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called for " << type << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "meeeaaaowww...." << std::endl;
}
