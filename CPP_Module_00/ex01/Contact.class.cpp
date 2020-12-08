#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

Contact::Contact() {
}

Contact::~Contact(void) {
}

void	Contact::fillContactInfo(int index) {
	this->_index = index;
	std::cout << "Please fill the fields:" << std::endl;
	std::cout << "First name: ";
	getline(std::cin, this->_firstName);
	std::cout << "Last name: ";
	getline(std::cin, this->_lastName);
	std::cout << "Nickname: ";
	getline(std::cin, this->_nickname);
	std::cout << "Login: ";
	getline(std::cin, this->_login);
	std::cout << "Postal address: ";
	getline(std::cin, this->_postalAddress);
	std::cout << "Email: ";
	getline(std::cin, this->_email);
	std::cout << "Phone number: ";
	getline(std::cin, this->_phoneNumber);
	std::cout << "Birthday date: ";
	getline(std::cin, this->_birthdayDate);
	std::cout << "Favorite meal: ";
	getline(std::cin, this->_favoriteMeal);
	std::cout << "Underwear color: ";
	getline(std::cin, this->_underwearColor);
	std::cout << "Darkest secret: ";
	getline(std::cin, this->_darkestSecret);
}

void	Contact::displayContent() const {
	std::cout << "First name: ";
	std::cout << this->_firstName << std::endl;
	std::cout << "Last name: ";
	std::cout << this->_lastName << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->_nickname << std::endl;
	std::cout << "Login: ";
	std::cout << this->_login << std::endl;
	std::cout << "Postal address: ";
	std::cout << this->_postalAddress << std::endl;
	std::cout << "Email: ";
	std::cout << this->_email << std::endl;
	std::cout << "Phone number: ";
	std::cout << this->_phoneNumber << std::endl;
	std::cout << "Birthday date: ";
	std::cout << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal: ";
	std::cout << this->_favoriteMeal << std::endl;
	std::cout << "Underwear color: ";
	std::cout << this->_underwearColor << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << this->_darkestSecret << std::endl;
}

void	Contact::displayContentShort() const {
	std::cout << std::setw(10) << this->_index << "|";
	if (this->_firstName.length() < 10)
		std::cout << std::setw(10) << this->_firstName << "|";
	else
		std::cout << std::setw(9) << this->_firstName.substr(0, 9) << ".|";
	if (this->_lastName.length() < 10)
		std::cout << std::setw(10) << this->_lastName << "|";
	else
		std::cout << std::setw(9) << this->_lastName.substr(0, 9) << ".|";
	if (this->_nickname.length() < 10)
		std::cout << std::setw(10) << this->_nickname << std::endl;
	else
		std::cout << std::setw(9) << this->_nickname.substr(0, 9) << "." << std::endl;
}
