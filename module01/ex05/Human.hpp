/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 10:09:11 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 19:16:59 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
	const Brain		brain;
public:
	Human();
	~Human();
	const Brain&	getBrain() const;
	const Brain		getBrain();
	std::string		identify() const;
};

#endif