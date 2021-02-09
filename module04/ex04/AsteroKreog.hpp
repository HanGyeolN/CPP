/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:44:15 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:44:16 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

# include "IAsteroid.hpp"
# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"
# include <string>

class AsteroKreog : public IAsteroid
{
private:
	std::string	name_;
public:
	AsteroKreog();
	~AsteroKreog();
	AsteroKreog(AsteroKreog const &copy);
	AsteroKreog&	operator=(AsteroKreog const &ref);

	std::string		beMined(DeepCoreMiner *) const;
	std::string		beMined(StripMiner *) const;
	std::string		getName() const;
};

#endif