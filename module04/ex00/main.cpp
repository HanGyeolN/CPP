/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 22:39:22 by hna               #+#    #+#             */
/*   Updated: 2021/02/03 02:04:51 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

class	Human : public Victim
{
private:
	Human();
public:
	Human(std::string name);
	virtual ~Human();
	Human(Human const &copy);
	Human	&operator=(Human const &ref);

	virtual void	getPolymortphed(void) const;
};

Human::Human() : Victim()
{
}

Human::Human(std::string name) : Victim(name)
{
}

Human::~Human()
{
}

Human::Human(Human const &copy) : Victim(copy)
{
}

Human	&Human::operator=(Human const &ref)
{
	Victim::operator=(ref);
	return (*this);
}

void	Human::getPolymortphed(void) const
{
	std::cout << name_ << " has been turned into a frog!" << std::endl;
}

void	test(void)
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Human	hna("Hna");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(hna);
}

int		main(void)
{
	test();

	return 0;
}