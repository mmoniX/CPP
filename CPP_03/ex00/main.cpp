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
