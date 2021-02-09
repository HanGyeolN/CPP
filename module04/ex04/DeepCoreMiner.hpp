/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:44:13 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:44:14 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"
# include <string>
# include <iostream>

class DeepCoreMiner : public IMiningLaser
{
public:
	DeepCoreMiner();
	virtual ~DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner const &copy);
	DeepCoreMiner&	operator=(DeepCoreMiner const &ref);
	virtual void	mine(IAsteroid*);
};

#endif