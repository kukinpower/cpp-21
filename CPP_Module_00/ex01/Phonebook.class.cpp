#include <iostream>
#include "Phonebook.class.hpp"

Phonebook::Phonebook() {
	this->_i = 0;
}

Phonebook::~Phonebook() {
}

void	Phonebook::displayContacts() const {
	for (int j = 1; j <= this->_i; j++) {
		this->_contacts[j - 1].displayContentShort();
	}
}

void	Phonebook::displayEntry() const {
	this->_contacts[this->_entryIndex - 1].displayContent();
}

void	Phonebook::add() {
	if (this->_i < 8) {
		this->_i++;
		this->_contacts[this->_i - 1].fillContactInfo(this->_i);
	} else {
		std::cout << "The phonebook is full, please choose other option" << std::endl;
	}
}

void	Phonebook::search() {
	if (this->_i > 0)
		this->displayContacts();
	else {
		std::cout << "The Phonebook is empty. ADD some entries" << std::endl;
		return ;
	}
	std::cout << "Enter index of an entry: ";
	while (true) {
		getline(std::cin, this->_entryIndexStr);
		if (this->_entryIndexStr.size() != 1 || !::isdigit(this->_entryIndexStr[0]) || this->_entryIndexStr[0] == '0' || this->_entryIndexStr[0] == '9') {
			std::cout << "Please enter a number from 1 to 8: ";
		} else {
			this->_entryIndex =  std::stoi(this->_entryIndexStr);
			if (this->_entryIndex > this->_i) {
				std::cout << "There's no contact with index " << this->_entryIndex << " yet." << std::endl;
				std::cout << "Try again: ";
			} else {
				std::cout << std::endl;
				this->displayEntry();
				break ;
			}
		}
	}
}
