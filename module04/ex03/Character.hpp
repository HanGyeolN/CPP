#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

namespace CHARACTER_CONST
{
	const int	INVENTORY_SIZE = 4;
}

class Character : public ICharacter
{
private:
	AMateria*	inventory_[CHARACTER_CONST::INVENTORY_SIZE];
	std::string	name_;
public:
	virtual ~Character();
	Character(Character const &copy);
	Character&	operator=(Character const &ref);

	Character(std::string const &name);
	virtual std::string const & getName() const;
	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);
private:
	Character();
};

#endif