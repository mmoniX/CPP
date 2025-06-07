#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return (NULL);
    Zombie *zombie_horde = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        zombie_horde[i].setName(name);
        zombie_horde[i].announce();
        i++;
    }
    return (zombie_horde);
}
