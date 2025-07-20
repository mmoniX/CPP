/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:22:51 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/20 18:58:29 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

// ICharacter::~ICharacter()
// {
// 	std::cout << "ICharacter: destructor called" << std::endl;
// }

Character::Character( void ) : name("ch: def")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	// std::cout << "Character: default constructor called" << std::endl;
}

Character::Character( std::string cname ) : name(cname)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	// std::cout << "Character: constructor called" << std::endl;
}

Character::Character( const Character &obj ) : name(obj.name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = obj.inventory[i] ? obj.inventory[i]->clone() : NULL;
	// std::cout << "Character: copy constructor called" << std::endl;
}

Character &Character::operator=( const Character &obj )
{
	if (this != &obj)
	{
		name = obj.name;
		for (int i = 0; i < 4; i++)
		{
			delete inventory[i];
			inventory[i] = obj.inventory[i] ? obj.inventory[i]->clone() : NULL;
		}
	}
	return *this;
	// std::cout << "Character: copy assignment operator called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	// std::cout << "Character: destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::use( int idx, ICharacter& target )
{
	if ((idx >= 0 && idx < 4) && inventory[idx] != NULL)
		inventory[idx]->use(target);
}

void Character::equip( AMateria* m )
{
	if (m == NULL)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip( int idx )
{
	if (idx >= 0 && idx < 4)
		inventory[idx] = NULL;
}
