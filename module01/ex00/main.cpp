/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 07:52:06 by hna               #+#    #+#             */
/*   Updated: 2021/01/15 16:35:24 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony	*ret;

	ret = new Pony("heap");
	ret->show();
	delete(ret);
}

void	ponyOnTheStack()
{
	Pony	pony("stack");

	pony.show();
}

int		main(void)
{	
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}