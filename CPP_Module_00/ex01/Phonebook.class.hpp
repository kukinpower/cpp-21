#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class Phonebook {
public:
	Contact			contacts[8];
	int				i;
	int				entryIndex;

	Phonebook();
	~Phonebook();

	void	add();
	void	search();
	void	displayContacts();
	void	displayEntry();
};

#endif