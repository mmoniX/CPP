#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat: default constructor created" << std::endl; 
}

WrongCat::WrongCat( std::string ctype ) : WrongAnimal(ctype)
{
	type = ctype;
	std::cout << "WrongCat: constructor created with type: " << ctype << std::endl;
}

WrongCat::WrongCat( const WrongCat &obj ) : WrongAnimal( obj )
{
	*this = obj;
	std::cout << "WrongCat: copy constructor created" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &obj )
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "WrongCat: copy assignment operator created" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "it's mimicking cat sound" << std::endl;
}
