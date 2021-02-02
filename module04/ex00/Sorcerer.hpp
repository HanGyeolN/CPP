/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:40:42 by hna               #+#    #+#             */
/*   Updated: 2021/02/03 01:47:02 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string	name_;
	std::string	title_;
	Sorcerer();

public:
	~Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &copy);
	Sorcerer	&operator=(const Sorcerer &ref);
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void		polymorph(const Victim &ref) const;
};

std::ostream	&operator<<(std::ostream &os, const Sorcerer &ref);

#endif