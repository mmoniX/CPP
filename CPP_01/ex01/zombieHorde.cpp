#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string hname )
{
    if (N <= 0)
        return (NULL);
    Zombie* zombie_horde = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        zombie_horde[i].setName(hname);
        zombie_horde[i].announce();
        i++;
    }
    return (zombie_horde);
}
