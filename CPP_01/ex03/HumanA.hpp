#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
    private:
        std::string aname;
        Weapon &weaponType;
    public:
        HumanA( std::string name, Weapon &weaponType );
        ~HumanA();
        void attack( void );
};

#endif