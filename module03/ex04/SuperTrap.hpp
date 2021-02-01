/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:17:20 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 16:09:43 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(SuperTrap const &copy);
	SuperTrap(std::string const &name);
	virtual ~SuperTrap();
	SuperTrap	&operator=(SuperTrap const &copy);

	void	init();
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

#endif