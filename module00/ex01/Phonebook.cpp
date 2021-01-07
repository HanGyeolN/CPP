#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	int		i;

	i = 0;
	while (i < NUMBER_OF_CONTACTS)
	{
		check[i] = 0;
		i++;
	}
}

Phonebook::~Phonebook()
{
	return ;
}

int		Phonebook::get_idx()
{
	int		i;

	i = 0;
	while (i < NUMBER_OF_CONTACTS)
	{
		if (check[i] == 0)
			return (i);
		i++;
	}
	return (-1);
}

void	Phonebook::print_header()
{
	cout << "\x1B[2J\x1B[H";
	cout << "=================Phonebook===================" << endl;
}

int		Phonebook::get_field(string msg, string &data_str)
{
	cout << msg;
	getline(cin, data_str);
	if(!cin)
	{
		if(cin.eof())
		{
			cout << "EOF\n";
		}
		else
			cout << "other failure\n";
		exit(0);
	}
	return (1);
}

int		Phonebook::add_contact()
{
	int		i;

	i = this->get_idx();
	if (i == -1)
	{
		cout << "phonebook is full." << endl;
		return (1);
	}
	this->data[i].idx = std::to_string(i);
	print_header();
	cout << "input mode" << endl;
	get_field("first name:", this->data[i].first_name);
	get_field("last name:", this->data[i].last_name);
	get_field("nickname:", this->data[i].nickname);
	get_field("login:", this->data[i].login);
	get_field("postal_address:", this->data[i].postal_address);
	get_field("email_address:", this->data[i].email_address);
	get_field("phone_number:", this->data[i].phone_number);
	get_field("birthday_date:", this->data[i].birthday_date);
	get_field("favorite_meal:", this->data[i].favorite_meal);
	get_field("underwear_color:", this->data[i].underwear_color);
	get_field("darkest_secret:", this->data[i].darkest_secret);
	print_header();
	cout << "input success" << endl;
	this->check[i] = 1;
	return (1);
}

void	Phonebook::print_contact_field(string &target)
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

int		Phonebook::show_contact(int idx)
{
	cout << "|";
	print_contact_field(this->data[idx].idx);
	cout << "|";
	print_contact_field(this->data[idx].first_name);
	cout << "|";
	print_contact_field(this->data[idx].last_name);
	cout << "|";
	print_contact_field(this->data[idx].nickname);
	cout << "|" << endl;
	return (0);
}

void	Phonebook::search_contact()
{
	int		i;

	i = 0;
	print_header();
	cout << "---------------------------------------------\n";
    cout << "|     index|first_name| last_name|  nickname|\n";
    cout << "---------------------------------------------\n";
	while (i < NUMBER_OF_CONTACTS)
	{
		if (this->check[i] == 1)
			show_contact(i);
		i++;
	}
	cout << "---------------------------------------------\n";
}