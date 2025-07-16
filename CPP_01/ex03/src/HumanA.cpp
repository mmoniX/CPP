#include "../inc/HumanA.hpp"

HumanA::HumanA( std::string aname, Weapon &weaponType )
    :name(aname), weaponType(weaponType)
{
    // std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA()
{
    // std::cout << "HumanA destroyed" << std::endl;
}

void HumanA::attack( void )
{
    std::cout << name << " attacks with their " << weaponType.getType() << std::endl;
}
