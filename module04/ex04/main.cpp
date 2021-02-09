/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:45:00 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:46:28 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"

void	test()
{
	IMiningLaser	*laser;
	IAsteroid		*asteroid;

	laser = new StripMiner;
	asteroid = new AsteroKreog;
	laser->mine(asteroid);
	delete laser;

	laser = new DeepCoreMiner;
	laser->mine(asteroid);
	delete laser;
	delete asteroid;

	laser = new StripMiner;
	asteroid = new KoalaSteroid;
	laser->mine(asteroid);
	delete laser;

	laser = new DeepCoreMiner;
	laser->mine(asteroid);
	delete laser;
	delete asteroid;
}

void	test2()
{
	MiningBarge	barge;

	IMiningLaser	*tmp;
	tmp = new DeepCoreMiner;
	barge.equip(tmp);
	tmp = new DeepCoreMiner;
	barge.equip(tmp);
	tmp = new StripMiner;
	barge.equip(tmp);
	tmp = new StripMiner;
	barge.equip(tmp);

	IAsteroid		*target;
	target = new KoalaSteroid;
	barge.mine(target);
	delete target;
	target = new AsteroKreog;
	barge.mine(target);
	delete target;
}

int 	main()
{
	test();
	std::cout << "===========" << std::endl;
	test2();

	return (0);
}