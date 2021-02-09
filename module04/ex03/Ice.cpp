#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
}

Ice&		Ice::operator=(const Ice& ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria*	ret;

	ret = new Ice(*this);
	return (ret);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}