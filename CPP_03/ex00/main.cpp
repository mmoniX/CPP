/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:05:39 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/14 12:46:54 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	std::cout << "\n--- Creating ClapTrap 'CLAPPY' ---" << std::endl;
	ClapTrap clap("CLAPPY");

	std::cout << "\n--- Stats Check ---" << std::endl;
	std::cout << "HP: " << clap.getHitpoint()
	          << ", EP: " << clap.getEnergypoint()
	          << ", DMG: " << clap.getAttackpoint() << std::endl;

	std::cout << "\n--- ClapTrap attacks 'TARGET' ---" << std::endl;
	clap.attack("TARGET");

	std::cout << "\n--- ClapTrap takes damage ---" << std::endl;
	clap.takeDamage(5);

	std::cout << "\n--- ClapTrap repairs ---" << std::endl;
	clap.beRepaired(3);

	std::cout << "\n--- End of ClapTrap Test ---" << std::endl;
	return (0);
}
