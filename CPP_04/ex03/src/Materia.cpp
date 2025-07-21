#include "../inc/Materia.hpp"

AMateria::AMateria( void ) : type("DEF") {}

AMateria::AMateria( std::string const & type ) : type(type) {}

AMateria::AMateria( const AMateria &obj ) : type(obj.type) {}

AMateria &AMateria::operator=( const AMateria &obj )
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
