/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 18:00:00 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:10:56 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
private:
	int				hp_;
	std::string		type_;
	Enemy();
public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &copy);
	virtual			~Enemy();
	Enemy			&operator=(Enemy const &ref);

	int				getHP() const;
	std::string		getType() const;
	virtual void	takeDamage(int);
};

#endif