/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:54:15 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:54:16 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(TacticalMarine const &copy);
	TacticalMarine	&operator=(TacticalMarine const &ref);

	ISpaceMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

#endif