#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria( void );
		AMateria( std::string const &type );		//given
		AMateria( const AMateria &obj );
		AMateria &operator=( const AMateria &obj );
		virtual ~AMateria();

		std::string const &getType() const;		//given Returns the materia type
		virtual AMateria* clone() const = 0;		//given
		virtual void use( ICharacter& target );		//given
};

#endif