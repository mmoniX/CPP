#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie another_zombie(name);
    another_zombie.announce();
}