/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:54:06 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:54:08 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "AssaultTerminator.hpp"
# include "TacticalMarine.hpp"

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

class Squad : public ISquad
{
private:
	int				count_;
	t_list			*units_;
	t_list			*cur_;
public:
	Squad();
	virtual ~Squad();
	Squad(Squad const &copy);
	Squad	&operator=(Squad const &ref);
	
	int				getCount() const;
	ISpaceMarine	*getUnit(int) const;
	int				push(ISpaceMarine *);
};

#endif