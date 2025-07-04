#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
    this->name = name;
    std::cout << "Zombie " << name << " created." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " destroyed." << std::endl;
}
