/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:13:26 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:26:00 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
protected:
	AWeapon();
private:
	std::string		name_;
	int				apcost_;
	int				damage_;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &copy);
	virtual			~AWeapon();
	AWeapon			&operator=(AWeapon const &ref);

	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;
};

#endif