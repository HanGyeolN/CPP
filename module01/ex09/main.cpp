/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 07:24:55 by hna               #+#    #+#             */
/*   Updated: 2021/01/15 10:01:45 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger	logger("logfile.log");

	logger.log("0", "console log");
	logger.log("0", "console log2");
	logger.log("1", "file log");
	return (0);
}