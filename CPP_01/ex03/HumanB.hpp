#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    private:
        std::string bname;
        Weapon *weaponType;
    public:
        HumanB( std::string name );
        ~HumanB();
        void setWeapon( Weapon &weaponType );
        void attack( void );
};

#endif