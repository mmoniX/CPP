#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weaponType )
    :aname(name), weaponType(weaponType)
{
    // std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA()
{
    // std::cout << "HumanA destroyed" << std::endl;
}

void HumanA::attack( void )
{
    std::cout << aname << " attacks with their " << weaponType.getType() << std::endl;
}
