#include "../inc/Character.hpp"

Character::Character( void ) : name("ch: def")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( std::string cname ) : name(cname)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( const Character &obj ) : name(obj.name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = obj.inventory[i] ? obj.inventory[i]->clone() : NULL;
}

Character &Character::operator=( const Character &obj ) //check
{
	if (this != &obj)
	{
		name = obj.name;
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			inventory[i] = obj.inventory[i] ? obj.inventory[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

std::string const &Character::getName() const
{
	return name;
}

void Character::use( int idx, ICharacter& target )
{
	if ((idx >= 0 && idx < 4) && inventory[idx] != NULL)
		inventory[idx]->use(target);
}

void Character::equip( AMateria* m )
{
	if (m == NULL)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip( int idx )
{
	if (idx >= 0 && idx < 4)
		inventory[idx] = NULL;
}
