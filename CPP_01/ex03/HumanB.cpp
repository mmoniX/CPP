#include "HumanB.hpp"

HumanB::HumanB( std::string bname )
{
    name = bname;
    weaponType = NULL;
    // std::cout << "HumanB created" << std::endl;
}

HumanB::~HumanB()
{
    // std::cout << "HumanB destroyed" << std::endl;
}

void HumanB::setWeapon( Weapon &btype )
{
    weaponType = &btype;
}

void HumanB::attack( void )
{
    if (!weaponType)
        std::cout << name << " has no weapon to attack!" << std::endl;
    else
        std::cout << name << " attacks with their " << weaponType->getType() << std::endl;
}
