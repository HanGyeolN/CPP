/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:52:38 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:52:39 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void	basic_test()
{
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");

	AMateria*	tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter*	bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void	test()
{
	MateriaSource*	src = new MateriaSource();
	MateriaSource* copy = new MateriaSource();

	Character	*me = new Character("hna");
	Character	*enemy = new Character("enemy");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	AMateria	*tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	*copy = *src;
	tmp = copy->createMateria("ice");
	
	me->equip(tmp);

	me->use(0, *enemy);
	me->use(1, *enemy);
	me->use(2, *enemy);
	me->use(3, *enemy);

	std::cout << std::endl;

	*enemy = *me;
	enemy->use(0, *me);
	enemy->use(1, *me);

	delete copy;
	delete src;

	delete me;
	delete enemy;
}

int main()
{
	basic_test();
	std::cout << "=============" << std::endl;
	test();
	return (0);
}