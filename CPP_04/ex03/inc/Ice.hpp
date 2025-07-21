#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "Materia.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice(std::string const &type);
		Ice(const Ice &obj);
		Ice &operator=(const Ice &obj);
		~Ice();

		AMateria *clone() const;
		void use( ICharacter& target );	
};

#endif