#include "Zombie.hpp"

int main(void)
{
    Zombie zom("rony"); //stack allocation (automatic by destructor)
    zom.announce();
    Zombie *zoomb = newZombie("mahabub"); //heap allocation (delete by user)
    zoomb->announce();
    delete zoomb;
    randomChump("random"); //temporary (automatic at the end of function)
    return (0);
}
