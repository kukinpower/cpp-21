#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class Phonebook {
public:
	Phonebook();
	~Phonebook();

	void		add();
	void		search();
	void		displayContacts() const;
	void		displayEntry() const;

private:
	Contact		_contacts[8];
	int			_i;
	std::string	_entryIndexStr;
	int			_entryIndex;
};

#endif