#include "../inc/Animal.hpp"

Animal::Animal( void ) : type("Unknown")
{
	std::cout << "Animal: default constructor created" << std::endl; 
}

Animal::Animal( std::string atype) : type(atype)
{
	std::cout << "Animal: constructor created with type: " << atype << std::endl;
}

Animal::Animal( const Animal &obj) : type(obj.type)
{
	std::cout << "Animal: copy constructor created" << std::endl;
}
Animal &Animal::operator=( const Animal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Animal: copy assignment operator created" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal: destructor called" << std::endl;
}

std::string Animal::getType( void ) const
{
	return type;
}

void Animal::makeSound( void ) const
{
	std::cout << "Animal is making sound" << std::endl;
}
