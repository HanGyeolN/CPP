#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &copy);
	AssaultTerminator	&operator=(AssaultTerminator const &ref);

	ISpaceMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}
AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{}
AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &ref)
{}
ISpaceMarine*	AssaultTerminator::clone() const
{}
void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}
void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}
void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

#endif