#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &obj )
{
	for (int i = 0; i < 4; i++)
		templates[i] = obj.templates[i] ? obj.templates[i]->clone() : NULL;
}

MateriaSource &MateriaSource::operator=( const MateriaSource &obj )
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (templates[i])
				delete templates[i];
			templates[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
			templates[i] = obj.templates[i] ? obj.templates[i]->clone() : NULL;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (templates[i])
			delete templates[i];
		templates[i] = NULL;
	}
}

void MateriaSource::learnMateria( AMateria* m)
{
	if (m == NULL)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (templates[i] == NULL)
		{
			templates[i] = m->clone();
			delete m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (templates[i] && templates[i]->getType() == type)
			return templates[i]->clone();
	}
	return NULL;
}
