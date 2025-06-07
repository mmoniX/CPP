#ifndef Zombie_HPP
# define Zombie_HPP
# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie( void );
        ~Zombie();
        void announce( void );
        void setName( std::string zname );
};
Zombie* zombieHorde( int N, std::string name );

#endif