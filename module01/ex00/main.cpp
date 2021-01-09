/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 07:52:06 by hna               #+#    #+#             */
/*   Updated: 2021/01/10 07:52:07 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap()
{
	Pony	*ret;

	ret = new Pony("heap");
	return (ret);
}

void	ponyOnTheStack()
{
	Pony	pony("stack");
}

int		main(void)
{
	Pony	*main_pony;

	main_pony = ponyOnTheHeap();
	ponyOnTheStack();
	delete main_pony;
	return (0);
}