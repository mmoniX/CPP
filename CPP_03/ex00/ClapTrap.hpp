#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hit;
		int			energy;
		int			damage;
	public:
		ClapTrap( void );
		ClapTrap( std::string cname );
		ClapTrap( const ClapTrap &obj);
		ClapTrap &operator=( const ClapTrap &obj);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHitpoint( void );
		int getEnergypoint( void );
		int getAttackpoint( void );
};

#endif
