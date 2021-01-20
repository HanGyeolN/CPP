/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 04:07:43 by hna               #+#    #+#             */
/*   Updated: 2021/01/12 04:07:44 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

namespace CONTACT_CONST
{
	enum
	{
		FIRST_NAME,
		LAST_NAME,
		NICK_NAME,
		LOGIN,
		POSTAL_ADDRESS,
		EMAIL_ADDRESS,
		PHONE_NUMBER,
		BIRTHDAY_DATE,
		FAVORITE_MEAL,
		UNDERWEAR_COLOR,
		DARKEST_SECRET,
		NB_FIELD,
	};
}

class	Contact
{
private:
	string		fields[CONTACT_CONST::NB_FIELD];
	int			scan_field(string msg, int field_idx);
	void		print_field(string msg, int field_idx) const;

public:
	int			scan();
	string		get(int field_idx) const;
	void		print() const;
	Contact();
	~Contact();
};

#endif
