/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:41:17 by hna               #+#    #+#             */
/*   Updated: 2021/02/03 01:46:32 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
protected:
	std::string	name_;
	Victim();

public:
	virtual ~Victim();
	Victim(std::string name);
	Victim(const Victim &copy);
	Victim		&operator=(const Victim &ref);
	std::string	getName(void) const;
	virtual void		getPolymortphed(void) const;
};

std::ostream	&operator<<(std::ostream &os, const Victim &ref);

#endif