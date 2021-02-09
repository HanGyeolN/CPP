/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:53:58 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:53:58 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Squad.hpp"

void	basic_test()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
}

void	test()
{
	ISpaceMarine* t1 = new TacticalMarine;
	ISpaceMarine* t2 = new TacticalMarine;
	ISpaceMarine* t3 = new TacticalMarine;
	ISpaceMarine* a1 = new AssaultTerminator;
	ISpaceMarine* a2 = new AssaultTerminator;
	ISpaceMarine* a3 = new AssaultTerminator;

	Squad* squad1 = new Squad;
	squad1->push(t1);
	squad1->push(t2);
	squad1->push(t3);

	Squad* squad2 = new Squad;
	squad2->push(a1);
	squad2->push(a2);
	squad2->push(a3);

	squad2->getUnit(2)->battleCry();
	*squad2 = *squad1;
	squad2->getUnit(2)->battleCry();
	delete squad2;
}

int main()
{
	basic_test();
	std::cout << "===========================" << std::endl;
	test();

	return 0;
}