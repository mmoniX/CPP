#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "Materia.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure(std::string const &type);
		Cure(const Cure &obj);
		Cure &operator=(const Cure &obj);
		~Cure();

		AMateria *clone() const;
		void use( ICharacter& target );	
};

#endif