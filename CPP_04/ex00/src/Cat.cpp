#include "../inc/Cat.hpp"

Cat::Cat( void ) : Animal()
{
	type = "Cat";
	std::cout << "Cat: default constructor created" << std::endl; 
}

Cat::Cat( std::string ctype ) : Animal(ctype)
{
	type = ctype;
	std::cout << "Cat: constructor created with type: " << ctype << std::endl;
}

Cat::Cat( const Cat &obj ) : Animal( obj )
{
	*this = obj;
	std::cout << "Cat: copy constructor created" << std::endl;
}

Cat &Cat::operator=( const Cat &obj )
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Cat: copy assignment operator created" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "meeeaaaowww...." << std::endl;
}
