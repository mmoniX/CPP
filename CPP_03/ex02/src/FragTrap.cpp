#include "../inc/FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap: default constructor called for " << name << std::endl;
}

FragTrap::FragTrap( std::string fname ) : ClapTrap( fname )
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap: constructor called for " << fname << std::endl;
}

FragTrap::FragTrap( const FragTrap &obj) : ClapTrap( obj )
{
	std::cout << "FragTrap: copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->hit = obj.hit;
		this->energy = obj.energy;
		this->damage = obj.damage;
	}
	return *this;
	std::cout << "FragTrap: copy assignment operator called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: destructor called for " << name << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << name << " send highFive request ✋" << std::endl;
}
