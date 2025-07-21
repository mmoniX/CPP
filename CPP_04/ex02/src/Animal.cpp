#include "../inc/Animal.hpp"

AAnimal::AAnimal( void ) : type("Unknown")
{
	std::cout << "AAnimal: default constructor created" << std::endl; 
}

AAnimal::AAnimal( std::string atype) : type(atype)
{
	std::cout << "AAnimal: constructor created with type: " << atype << std::endl;
}

AAnimal::AAnimal( const AAnimal &obj) : type(obj.type)
{
	std::cout << "AAnimal: copy constructor created" << std::endl;
}
AAnimal &AAnimal::operator=( const AAnimal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "AAnimal: copy assignment operator created" << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: destructor called" << std::endl;
}

std::string AAnimal::getType( void ) const
{
	return type;
}
