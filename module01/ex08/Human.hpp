/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:28:29 by hna               #+#    #+#             */
/*   Updated: 2021/01/15 09:45:16 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>
#include <map>

class Human
{
private:
	std::string		name;
	void(Human::*funcs[3])(std::string const &);

	void			meleeAttack(std::string const & target);
	void			rangedAttack(std::string const & target);
	void			intimidatingShout(std::string const & target);
public:
	Human(std::string const &name);
	~Human();
	void			action(std::string const & action_name, std::string const & target);
};

#endif