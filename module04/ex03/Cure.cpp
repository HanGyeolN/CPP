#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
}

Cure&	Cure::operator=(const Cure& ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria*	ret;

	ret = new Cure(*this);
	return (ret);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}