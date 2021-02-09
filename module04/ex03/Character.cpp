#include "Character.hpp"

Character::Character()
{
}

Character::~Character()
{
	for (int i = 0; i < CHARACTER_CONST::INVENTORY_SIZE; i++)
	{
		if (inventory_[i] != nullptr)
			inventory_[i] = inventory_[i]->clone();
		else
			inventory_[i] = nullptr;
	}
}

Character::Character(Character const &copy)
{
	name_ = copy.name_;
	for (int i = 0; i < CHARACTER_CONST::INVENTORY_SIZE; i++)
	{
		if (copy.inventory_[i])
			inventory_[i] = copy.inventory_[i]->clone();
		else
			inventory_[i] = copy.inventory_[i];
	}
}

Character&	Character::operator=(Character const &ref)
{
	int		i;

	for (i = 0; i < CHARACTER_CONST::INVENTORY_SIZE; i++)
	{
		if (inventory_[i])
			delete inventory_[i];
	}
	name_ = ref.name_;
	for (i = 0; i < CHARACTER_CONST::INVENTORY_SIZE; i++)
	{
		if (ref.inventory_[i] != nullptr)
			inventory_[i] = ref.inventory_[i]->clone();
		else
			inventory_[i] = nullptr;
	}
	return (*this);
}

Character::Character(std::string const &name) : name_(name)
{
	for(int i = 0; i < CHARACTER_CONST::INVENTORY_SIZE; i++)
		inventory_[i] = nullptr;
}

const std::string& Character::getName() const
{
	return (name_);
}

void	Character::equip(AMateria* m)
{
	int		i;

	i = 0;
	while (i < CHARACTER_CONST::INVENTORY_SIZE)
	{
		if (inventory_[i] == nullptr)
		{
			inventory_[i] = m;
			return ;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= CHARACTER_CONST::INVENTORY_SIZE || inventory_[idx] == nullptr)
		return ;
	inventory_[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= CHARACTER_CONST::INVENTORY_SIZE || inventory_[idx] == nullptr)
		return ;
	inventory_[idx]->use(target);
	inventory_[idx]->AMateria::use(target);
}