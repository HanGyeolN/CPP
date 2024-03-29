/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:48:17 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:48:18 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"

class AMateria
{
private:
	std::string		_type;
	unsigned int	_xp;

public:
	virtual ~AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	AMateria&	operator=(AMateria const &ref);
	
	std::string const & getType() const;
	unsigned int getXP() const;
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
private:
	AMateria();
};

#endif