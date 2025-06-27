#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
    bname = name;
    weaponType = NULL;
    // std::cout << "HumanB created" << std::endl;
}

HumanB::~HumanB()
{
    // std::cout << "HumanB destroyed" << std::endl;
}

void HumanB::setWeapon( Weapon &weapon )
{
    weaponType = &weapon;
}

void HumanB::attack( void )
{
    if (!weaponType)
        std::cout << bname << " has no weapon to attack!" << std::endl;
    else
        std::cout << bname << " attacks with their " << weaponType->getType() << std::endl;
}
