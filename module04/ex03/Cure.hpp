#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& copy);
	Cure&	operator=(const Cure& ref);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif