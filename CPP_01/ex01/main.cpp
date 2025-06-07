#include "Zombie.hpp"

int main(void)
{
    int N = 10;
    std::string name = "mahabub";
    Zombie *zoomb = zombieHorde(N, name);
    if (zoomb)
        delete [] zoomb;
    return (0);
}
