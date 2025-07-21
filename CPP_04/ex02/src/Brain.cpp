#include "../inc/Brain.hpp"

Brain::Brain( void )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "DEF";
	std::cout << "Brain: default constructor created" << std::endl; 
}

Brain::Brain( std::string idea )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
	std::cout << "Brain: constructor created with type: " << idea << std::endl;
}

Brain::Brain( const Brain &obj )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	std::cout << "Brain: copy constructor created" << std::endl;
}

Brain &Brain::operator=( const Brain &obj )
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain: copy assignment operator created" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: destructor called" << std::endl;
}

void Brain::setIdea( const std::string &idea )
{
	ideas[0] = idea;
}

std::string Brain::getIdea( void )
{
	return ideas[0];
}
