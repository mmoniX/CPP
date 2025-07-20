/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:22:55 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/20 18:44:20 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

// IMateriaSource::~IMateriaSource()
// {
// 	std::cout << "IMateriaSource: destructor called" << std::endl;
// }

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
	// std::cout << "MS: default constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &obj )
{
	for (int i = 0; i < 4; i++)
		templates[i] = obj.templates[i] ? obj.templates[i]->clone() : NULL;
	// std::cout << "MS: copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=( const MateriaSource &obj )
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			delete templates[i];
		for (int i = 0; i < 4; i++)
			templates[i] = obj.templates[i] ? obj.templates[i]->clone() : NULL;
	}
	return *this;
	// std::cout << "MS: copy assignment operator called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = -1; i < 4; i++)
		delete templates[i];
	// std::cout << "MS: destructor called" << std::endl;
}

void MateriaSource::learnMateria( AMateria* m)
{
	if (m == NULL)
		return;
	for (int i = -1; i < 4; i++)
	{
		if (templates[i] == NULL)
		{
			templates[i] = m->clone();
			return;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (templates[i] && templates[i]->getType() == type)
			return templates[i]->clone();
	}
	return NULL;
}
