/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 04:07:19 by hna               #+#    #+#             */
/*   Updated: 2021/01/12 04:07:20 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
}

Phonebook::~Phonebook()
{
}

int		Phonebook::GetIndex() const
{
	return (this->index);
}

void	Phonebook::print_header() const
{
	cout << "\x1B[2J\x1B[H";
	cout << "=================Phonebook===================" << endl;
}

int		Phonebook::add_contact()
{
	int		i;

	i = GetIndex();
	if (i == MAX_CONTACT_SIZE)
	{
		cout << "phonebook is full." << endl;
		return (1);
	}
	if (!contacts[i].scan())
	{
		cout << "scan error" << endl;
		return (0);
	}
	(this->index)++;
	print_header();
	cout << "Input Success" << endl;
	return (1);
}

void	Phonebook::print_contact_field(string target) const
{
	if (target.length() > 10)
	{
		cout << target.substr(0, 9) << ".";
	}
	else
	{
		cout.width(10);
		cout << target;
	}
}

void	Phonebook::print_contact_field(int num) const
{
	cout.width(10);
	cout << num;
}

int		Phonebook::show_contacts() const
{
	int		i;

	i = 0;
	if (this->index == 0)
		return (0);
	cout << "---------------------------------------------\n";
    cout << "|     index|first_name| last_name|  nickname|\n";
    cout << "---------------------------------------------\n";
	while (i < this->index)
	{
		cout << "|";
		print_contact_field(i);
		cout << "|";
		print_contact_field(contacts[i].get(CONTACT_CONST::FIRST_NAME));
		cout << "|";
		print_contact_field(contacts[i].get(CONTACT_CONST::LAST_NAME));
		cout << "|";
		print_contact_field(contacts[i].get(CONTACT_CONST::NICK_NAME));
		cout << "|" << endl;
		i++;
	}
	cout << "---------------------------------------------\n";
	return (1);
}

int		Phonebook::scan_idx() const
{
	int			i;
	string		str;
	const char	*c_str;

	cout << "search index: ";
	getline(cin, str);
	if (!cin)
	{
		cout << "Invalid input" << endl;
		exit(0);
	}
	c_str = str.c_str();
	i = 0;
	while (c_str[i])
	{
		if (!(c_str[i] >= '0' && c_str[i] <= '9'))
			return (-1);
		i++;
	}
	i = std::stoi(str);
	return (i);
}

void	Phonebook::search_contact() const
{
	int		target_idx;

	this->print_header();
	if (!this->show_contacts())
	{
		cout << "Contact is empty." << endl;
		return ;
	}
	target_idx = this->scan_idx();
	if (target_idx == -1 || target_idx >= this->index)
	{
		cout << "Invalid index" << endl;
		return ;
	}
	this->print_header();
	this->contacts[target_idx].print();
	cout << "---------------------------------------------\n";
}