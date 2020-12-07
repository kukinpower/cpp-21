#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

Phonebook::Phonebook() {
	this->i = 0;
}

Phonebook::~Phonebook() {
}

void	Phonebook::displayContacts() {
	for (int j = 1; j <= this->i; j++) {
		std::cout << std::setw(10) << contacts[j - 1].index << "|";
		if (contacts[j - 1].firstName.length() < 10)
			std::cout << std::setw(10) << contacts[j - 1].firstName << "|";
		else
			std::cout << std::setw(9) << contacts[j - 1].firstName.substr(0, 9) << ".|";
		if (contacts[j - 1].lastName.length() < 10)
			std::cout << std::setw(10) << contacts[j - 1].lastName << "|";
		else
			std::cout << std::setw(9) << contacts[j - 1].lastName.substr(0, 9) << ".|";
		if (contacts[j - 1].nickname.length() < 10)
			std::cout << std::setw(10) << contacts[j - 1].nickname << std::endl;
		else
			std::cout << std::setw(9) << contacts[j - 1].nickname.substr(0, 9) << "." << std::endl;
	}
}

void	Phonebook::displayEntry() {
	contacts[this->entryIndex - 1].displayContent();
}

void	Phonebook::add() {
	if (this->i < 8) {
		i++;
		contacts[i - 1].setIndex(i);
		contacts[i - 1].add();
	} else {
		std::cout << "The phonebook is full, please choose other option" << std::endl;
	}
}

void	Phonebook::search() {
	if (this->i > 0)
		this->displayContacts();
	else {
		std::cout << "The Phonebook is empty. ADD some entries" << std::endl;
		return ;
	}
	std::cout << "Enter index of an entry: ";
	while (true) {
		if (!(std::cin >> this->entryIndex)) {
			std::cout << "Please enter numbers only." << std::endl;
			std::cin.clear();
			std::cin.ignore(10000,'\n');
		} else if (this->entryIndex <= this->i && this->entryIndex > 0 && this->entryIndex < 9) {
			this->displayEntry();
			break ;
		} else {
			std::cout << "Bad index value. Add valid index from 1 to entries count: ";
		}
	}
}
