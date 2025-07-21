#include "../inc/Ice.hpp"

Ice::Ice( void ) : AMateria()
{
	this->type = "ice";
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	this->type = type;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	this->type = obj.type;
}

Ice &Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
