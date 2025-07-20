/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:14:12 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/20 18:56:22 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "Materia.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];
	public:
		Character( void );
		Character( std::string cname );
		Character( const Character &obj );
		Character &operator=( const Character &obj );
		~Character();

		std::string const &getName() const;
		void use( int idx, ICharacter& target );
		void equip( AMateria* m );
		void unequip( int idx );
};

#endif