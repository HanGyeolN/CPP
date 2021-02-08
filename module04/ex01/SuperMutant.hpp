/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 18:21:42 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:24:59 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

namespace SUPER_MUTANT_CONST
{
	const int			HP = 170;
	const std::string	TYPE = "Super Mutant";
}

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &copy);
	virtual 		~SuperMutant();
	SuperMutant		&operator=(SuperMutant const &ref);

	int				getHP() const;
	virtual void	takeDamage(int);
};

#endif