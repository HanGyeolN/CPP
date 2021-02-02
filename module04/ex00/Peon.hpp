/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:41:30 by hna               #+#    #+#             */
/*   Updated: 2021/02/03 01:46:24 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();

public:
	virtual ~Peon();
	Peon(std::string name);
	Peon(const Peon &copy);
	Peon		&operator=(const Peon &ref);
	std::string	getName(void) const;
	virtual void		getPolymortphed(void) const;
};

std::ostream	&operator<<(std::ostream &os, const Peon &ref);

#endif