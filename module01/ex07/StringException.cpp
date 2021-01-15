/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringException.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:36:14 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 16:37:58 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringException.hpp"

void	StringException::showExceptionReason() const
{
	std::cout << "Empty string input" << std::endl;
}
