/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 07:45:03 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 07:49:46 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "string: " << str << std::endl;
	std::cout << "pointer: " << *ptr << std::endl;
	std::cout << "reference: " << ref << std::endl;
	return (0);
}