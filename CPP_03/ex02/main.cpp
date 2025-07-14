/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:09:47 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/14 12:51:42 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
	std::cout << "\n--- Creating FragTrap 'FRAGGY' ---" << std::endl;
	FragTrap frag("FRAGGY");

	std::cout << "\n--- Stats Check ---" << std::endl;
	std::cout << "HP: " << frag.getHitpoint()
	          << ", EP: " << frag.getEnergypoint()
	          << ", DMG: " << frag.getAttackpoint() << std::endl;

	std::cout << "\n--- FragTrap attacks 'BADBOT' ---" << std::endl;
	frag.attack("BADBOT");

	std::cout << "\n--- FragTrap takes damage ---" << std::endl;
	frag.takeDamage(25);

	std::cout << "\n--- FragTrap repairs ---" << std::endl;
	frag.beRepaired(20);

	std::cout << "\n--- FragTrap requests high five ---" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n--- End of FragTrap Test ---" << std::endl;
	return (0);
}