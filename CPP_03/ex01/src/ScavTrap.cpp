#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap: default constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap( std::string sname ) : ClapTrap( sname )
{
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap: constructor called for " << sname << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &obj) : ClapTrap( obj )
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->hit = obj.hit;
		this->energy = obj.energy;
		this->damage = obj.damage;
	}
	return *this;
	std::cout << "ScavTrap: copy assignment operator called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: destructor called for " << name << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << name << " turn on Gate keeper mode 🛡" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hit < 1)
	{
		std::cout << "ScapTrap: " << name << " is out of hit points (NO ATTACK) 💀" << std::endl;
		return;
	}
	else if (energy > 0)
	{
		energy--;
		std::cout << "ScapTrap: " << name << " attacks " << target << ", causing " << damage << " hit points of damage! 🔥" << std::endl;
		std::cout << "ScapTrap: " << name << "'s current energy point is: " << energy << std::endl;
	}
	else
	{
		std::cout << "ScapTrap: " << name << " is out of energy (NO ATTACK) 😵" << std::endl;
		return;
	}
}
