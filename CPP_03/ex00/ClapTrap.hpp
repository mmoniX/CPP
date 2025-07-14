/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:05:35 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/14 12:43:55 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hit;
		int			energy;
		int			damage;
	public:
		ClapTrap( void );
		ClapTrap( std::string cname );
		ClapTrap( const ClapTrap &obj);
		ClapTrap &operator=( const ClapTrap &obj);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHitpoint( void );
		int getEnergypoint( void );
		int getAttackpoint( void );
};

#endif
