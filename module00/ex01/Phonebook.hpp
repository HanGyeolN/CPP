#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

# define MAX_SIZE 100
# define NUMBER_OF_CONTACTS 8

class	Phonebook
{
private:
	Contact	data[NUMBER_OF_CONTACTS];
	int		check[NUMBER_OF_CONTACTS];

	int		get_idx();
	int		get_field(string msg, string &data_str);
	int		show_contact(int idx);
	void	print_contact_field(string &target);

public:
	int		add_contact();
	void	search_contact();
	void	print_header();

	Phonebook();
	~Phonebook();
};

#endif