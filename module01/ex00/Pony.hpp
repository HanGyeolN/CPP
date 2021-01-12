/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 07:51:45 by hna               #+#    #+#             */
/*   Updated: 2021/01/10 08:08:47 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class Pony
{
private:
	string	name;
public:
	void	show();
	Pony();
	Pony(string name);
	~Pony();
};

#endif