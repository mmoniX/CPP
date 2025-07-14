/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:25:33 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/14 12:48:40 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	std::cout << "\n--- Creating ScavTrap 'SCAVVY' ---" << std::endl;
	ScavTrap scav("SCAVVY");

	std::cout << "\n--- Stats Check ---" << std::endl;
	std::cout << "HP: " << scav.getHitpoint()
	          << ", EP: " << scav.getEnergypoint()
	          << ", DMG: " << scav.getAttackpoint() << std::endl;

	std::cout << "\n--- ScavTrap attacks 'ENEMY' ---" << std::endl;
	scav.attack("ENEMY");

	std::cout << "\n--- ScavTrap takes damage ---" << std::endl;
	scav.takeDamage(15);

	std::cout << "\n--- ScavTrap repairs ---" << std::endl;
	scav.beRepaired(10);

	std::cout << "\n--- ScavTrap activates Gate Keeper mode ---" << std::endl;
	scav.guardGate();

	std::cout << "\n--- End of ScavTrap Test ---" << std::endl;
	return (0);
}
