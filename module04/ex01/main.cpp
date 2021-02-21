/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:51:30 by hna               #+#    #+#             */
/*   Updated: 2021/02/14 22:36:19 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int		main(void)
{
	Character* me = new Character("me");

	Enemy* b = new RadScorpion();
	Enemy* a = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	std::cout << *me;
	me->equip(pf);

	std::cout << *me;
	me->attack(a);
	me->attack(a);
	me->attack(a);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	me->attack(b);
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	me->attack(b);
	me->attack(b);
	std::cout << *me;
	std::cout << "======================================" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->equip(pf);
	me->attack(a);
	me->attack(b);

	delete me;
	delete pr;
	delete pf;

	return (0);
}