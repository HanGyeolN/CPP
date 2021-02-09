#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &copy) : _type(copy._type), _xp(copy._xp)
{
}

AMateria&		AMateria::operator=(AMateria const &ref)
{
	_type = ref._type;
	_xp = ref._xp;
	return (*this);
}

const std::string&	AMateria::getType() const
{
	return (_type);
}

unsigned int	AMateria::getXP() const
{
	return (_xp);
}

void			AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}