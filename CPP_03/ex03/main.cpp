/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:34:42 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/14 12:32:19 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	std::cout << "\n--- Creating DiamondTrap 'DAM' ---" << std::endl;
	DiamondTrap dia("DAM");
	std::cout << "Stats - HP: " << dia.getHitpoint()
	          << ", EP: " << dia.getEnergypoint()
	          << ", DMG: " << dia.getAttackpoint() << std::endl;

	std::cout << "\n--- Creating FragTrap 'FRAG' (dummy target) ---" << std::endl;
	FragTrap frag("FRAG");

	std::cout << "\n--- DiamondTrap attacks 'BOT' ---" << std::endl;
	dia.attack("BOT");

	std::cout << "\n--- FragTrap takes damage from DiamondTrap ---" << std::endl;
	frag.takeDamage(dia.getAttackpoint());

	std::cout << "\n--- DiamondTrap identity check ---" << std::endl;
	dia.whoAmI();

	std::cout << "\n--- DiamondTrap uses ScavTrap's guardGate ---" << std::endl;
	dia.guardGate();

	std::cout << "\n--- DiamondTrap uses FragTrap's highFivesGuys ---" << std::endl;
	dia.highFivesGuys();

	std::cout << "\n--- DiamondTrap takes damage ---" << std::endl;
	dia.takeDamage(40);

	std::cout << "\n--- DiamondTrap repairs ---" << std::endl;
	dia.beRepaired(30);

	std::cout << "\n--- End of DiamondTrap Test ---" << std::endl;
	return 0;
}

