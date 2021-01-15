/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:25:23 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 18:37:50 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human	human("bob");

	human.action("0 melee attack", "zombie");
	human.action("1 range attack", "zombie");
	human.action("2 shout", "zombie");
	return (0);
}