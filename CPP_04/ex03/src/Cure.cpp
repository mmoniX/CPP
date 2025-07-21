#include "../inc/Cure.hpp"

Cure::Cure( void ) : AMateria()
{
	this->type = "cure";
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	this->type = type;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	this->type = obj.type;
}

Cure &Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
