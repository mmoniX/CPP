/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:34:09 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/13 18:10:50 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string dname );
		DiamondTrap( const DiamondTrap &obj);
		DiamondTrap &operator=( const DiamondTrap &obj);
		~DiamondTrap();
		void whoAmI( void );
		void attack(const std::string& target);
};

#endif
