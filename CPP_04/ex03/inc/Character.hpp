/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:14:12 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 18:07:51 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "Materia.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character
{
	private:
	public:
		// virtual ~ICharacter() {}
		// virtual std::string const& getName() const = 0;
		// virtual void equip(AMateria* m) = 0;
		// virtual void unequip(int idx) = 0;
		// virtual void use(int idx, ICharacter& target) = 0;
};

#endif