#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string sname );
		ScavTrap( const ScavTrap &obj);
		ScavTrap &operator=( const ScavTrap &obj);
		~ScavTrap();
		void guardGate( void );
		void attack(const std::string& target);
};

#endif
