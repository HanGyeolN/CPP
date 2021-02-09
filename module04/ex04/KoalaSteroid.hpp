/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:44:37 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:44:37 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP

# include "IAsteroid.hpp"
# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"
# include <string>

class KoalaSteroid : public IAsteroid
{
private:
	std::string	name_;
public:
	KoalaSteroid();
	~KoalaSteroid();
	KoalaSteroid(KoalaSteroid const &copy);
	KoalaSteroid&	operator=(KoalaSteroid const &ref);

	std::string		beMined(DeepCoreMiner *) const;
	std::string		beMined(StripMiner *) const;
	std::string		getName() const;
};

#endif