#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap()
{
	name = "DIAMOND";
	// hit = FragTrap::getHitpoint();
	ScavTrap temp;
	energy = temp.getEnergypoint();
	// damage = FragTrap::getAttackpoint();
	std::cout << "DiamondTrap: default constructor called for " << name << std::endl;
}

DiamondTrap::DiamondTrap( std::string dname ) : ClapTrap(dname + "_clap_name")
{
	name = dname;
	// hit = FragTrap::getHitpoint();
	ScavTrap temp;
	energy = temp.getEnergypoint();
	// damage = FragTrap::getAttackpoint();
	std::cout << "DiamondTrap: constructor called for " << dname << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	name = obj.name;
	std::cout << "DiamondTrap: copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &obj)
{
	if (this != &obj)
	{
        ClapTrap::operator=(obj);
        FragTrap::operator=(obj);
        ScavTrap::operator=(obj);
        name = obj.name;
	}
	return *this;
	std::cout << "DiamondTrap: copy assignment operator called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: destructor called for " << name << std::endl;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << name << ", inherited from " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
