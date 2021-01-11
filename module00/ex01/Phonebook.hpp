#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class	Phonebook
{
	enum
	{
		MAX_CONTACT_SIZE = 8,
	};
private:
	Contact	contacts[MAX_CONTACT_SIZE];
	int		index;

	int		GetIndex() const;
	int		show_contacts() const;
	void	print_contact_field(string target) const;
	void	print_contact_field(int num) const;
	int		scan_idx() const;

public:
	int		add_contact();
	void	search_contact() const;
	void	print_header() const;

	Phonebook();
	~Phonebook();
};

#endif