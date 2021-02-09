#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

namespace MATERIA_CONST
{
	const int	MEMORY_SIZE = 4;
}

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	memory_[MATERIA_CONST::MEMORY_SIZE];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource&		operator=(MateriaSource const &ref);
	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const &type);
};

#endif