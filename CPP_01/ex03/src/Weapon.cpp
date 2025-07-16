#include "../inc/Weapon.hpp"

Weapon::Weapon( std::string type1 )
{
    type = type1;
    // std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon()
{
    // std::cout << "Weapon destroyed" << std::endl;
}

void Weapon::setType( std::string newType )
{
    type = newType;
}

std::string Weapon::getType( void ) const
{
    return (type);
}
