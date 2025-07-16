#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("CLAP"), hit(10), energy(10), damage(0)
{
	std::cout << "ClapTrap: default constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap( std::string cname ) : name(cname), hit(10), energy(10), damage(0)
{
	std::cout << "ClapTrap: constructor called for " << cname << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &obj) : name(obj.name), hit(obj.hit), energy(obj.energy), damage(obj.damage)
{
	std::cout << "ClapTrap: copy constructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=( const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->hit = obj.hit;
		this->energy = obj.energy;
		this->damage = obj.damage;
	}
	return *this;
	std::cout << "ClapTrap: copy assignment operator called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hit < 1)
	{
		std::cout << name << " is out of hit points (NO ATTACK) 💀" << std::endl;
		return;
	}
	else if (energy > 0)
	{
		energy--;
		std::cout << name << " attacks " << target << ", causing " << damage << " hit points of damage! 🔥" << std::endl;
		std::cout << name << "'s current energy point is: " << energy << std::endl;
	}
	else
	{
		std::cout << name << " is out of energy (NO ATTACK) 😵" << std::endl;
		return;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit < 1)
	{
		std::cout << name << " is already destroyed (NO DAMAGE) 💀" << std::endl;
		return;
	}
	hit -= amount;
	if (hit < 0) hit = 0;
	std::cout << name << " took " << amount << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit < 1)
	{
		std::cout << name << " is out of hit points (NO REPAIR) 💀" << std::endl;
		return;
	}
	if (energy < 1)
	{
		std::cout << name << " is out of energy (NO REPAIR) 😵" << std::endl;
		return;
	}
	hit += amount;
	energy--;
	std::cout << name << " got " << amount << " hit points. 🔧" << std::endl;
	std::cout << name << "'s current energy point is: " << energy << std::endl;
}

int ClapTrap::getHitpoint( void )
{
	return hit;
}

int ClapTrap::getEnergypoint( void )
{
	return energy;
}

int ClapTrap::getAttackpoint( void )
{
	return damage;
}
