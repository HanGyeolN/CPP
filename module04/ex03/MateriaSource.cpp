#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int		i;

	i = 0;
	while (i < MATERIA_CONST::MEMORY_SIZE)
	{
		memory_[i] = nullptr;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int		i;

	i = 0;
	while (i < MATERIA_CONST::MEMORY_SIZE)
	{
		if (memory_[i] != nullptr)
			delete memory_[i];
		i++;
	}
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < MATERIA_CONST::MEMORY_SIZE; i++)
	{
		if (copy.memory_[i])
			memory_[i] = copy.memory_[i]->clone();
		else
			memory_[i] = copy.memory_[i];
	}
	
}

MateriaSource&		MateriaSource::operator=(MateriaSource const &ref)
{
	int		i;

	for (i = 0; i < MATERIA_CONST::MEMORY_SIZE; i++)
	{
		if (memory_[i])
			delete memory_[i];
	}
	for (i = 0; i < MATERIA_CONST::MEMORY_SIZE; i++)
	{
		if (ref.memory_[i])
			memory_[i] = ref.memory_[i]->clone();
		else
			memory_[i] = ref.memory_[i];
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < MATERIA_CONST::MEMORY_SIZE; i++)
	{
		if (memory_[i] == nullptr)
		{
			memory_[i] = materia;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MATERIA_CONST::MEMORY_SIZE; i++)
	{
		if (memory_[i] && memory_[i]->getType() == type)
			return (memory_[i]->clone());
	}
	return (0);
}