/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:52:17 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:52:18 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& copy);
	Cure&	operator=(const Cure& ref);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif