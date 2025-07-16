#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    private:
        std::string name;
        Weapon *weaponType;
    public:
        HumanB( std::string bname );
        ~HumanB();
        void setWeapon( Weapon &btype );
        void attack( void );
};

#endif
