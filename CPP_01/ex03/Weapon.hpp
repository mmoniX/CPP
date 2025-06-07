#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon( void );
        ~Weapon();
        std::string setType( std::string newType );
        std::string getType( void ) const;
}

#endif