/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 08:06:41 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 19:22:45 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain
{
private:
	std::string	name;
public:
	Brain();
	~Brain();
	Brain(std::string name);
	Brain(const Brain &brain);
	std::string	identify() const;
};

#endif