#include "Zombie.hpp"

Zombie::Zombie( void )
{
    std::cout << "Zombie created with default name." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " destroyed." << std::endl;
}

void Zombie::setName( std::string zname )
{
    name = zname;
}
