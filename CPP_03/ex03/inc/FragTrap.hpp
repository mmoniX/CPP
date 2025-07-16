#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string fname );
		FragTrap( const FragTrap &obj);
		FragTrap &operator=( const FragTrap &obj);
		~FragTrap();
		void highFivesGuys( void );
};

#endif
