/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 04:07:11 by hna               #+#    #+#             */
/*   Updated: 2021/01/12 04:07:13 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int		Contact::scan_field(string msg, int idx)
{
	cout << msg;
	getline(cin, this->fields[idx]);
	if(!cin)
	{
		if(cin.eof())
			cout << "EOF\n";
		else
			cout << "other failure\n";
		exit(0);
	}
	return (1);
}

int		Contact::scan()
{
	scan_field("First Name: ", CONTACT_CONST::FIRST_NAME);
	scan_field("Last Name: ", CONTACT_CONST::LAST_NAME);
	scan_field("Nickname: ", CONTACT_CONST::NICK_NAME);
	scan_field("Login: ", CONTACT_CONST::LOGIN);
	scan_field("Postal Address: ", CONTACT_CONST::POSTAL_ADDRESS);
	scan_field("Email Address: ", CONTACT_CONST::EMAIL_ADDRESS);
	scan_field("Phone Number: ", CONTACT_CONST::PHONE_NUMBER);
	scan_field("Birthday Date: ", CONTACT_CONST::BIRTHDAY_DATE);
	scan_field("Favorite Meal: ", CONTACT_CONST::FAVORITE_MEAL);
	scan_field("Underwear Color: ", CONTACT_CONST::UNDERWEAR_COLOR);
	scan_field("Darkest Secret: ", CONTACT_CONST::DARKEST_SECRET);
	return (1);
}

void	Contact::print_field(string str, int field_idx) const
{
	cout << str << fields[field_idx] << endl;
}

void	Contact::print() const
{
	print_field("First Name: ", CONTACT_CONST::FIRST_NAME);
	print_field("Last Name: ", CONTACT_CONST::LAST_NAME);
	print_field("Nickname: ", CONTACT_CONST::NICK_NAME);
	print_field("Login: ", CONTACT_CONST::LOGIN);
	print_field("Postal Address: ", CONTACT_CONST::POSTAL_ADDRESS);
	print_field("Email Address: ", CONTACT_CONST::EMAIL_ADDRESS);
	print_field("Phone Number: ", CONTACT_CONST::PHONE_NUMBER);
	print_field("Birthday Date: ", CONTACT_CONST::BIRTHDAY_DATE);
	print_field("Favorite Meal: ", CONTACT_CONST::FAVORITE_MEAL);
	print_field("Underwear Color: ", CONTACT_CONST::UNDERWEAR_COLOR);
	print_field("Darkest Secret: ", CONTACT_CONST::DARKEST_SECRET);
}

string	Contact::get(int field_idx) const
{
	return (this->fields[field_idx]);
}