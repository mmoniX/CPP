#include "Zombie.hpp"

int main(void)
{
    Zombie zom("STACK");
    zom.announce();
    Zombie* zoomb = newZombie("HEAP");
    zoomb->announce();
    delete zoomb;
    randomChump("TEMP");
    return (0);
}