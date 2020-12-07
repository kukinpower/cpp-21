#include <iostream>
#include "Phonebook.class.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void	Contact::setIndex(int n) {
	this->index = n;
}

void	Contact::add() {
	std::cout << "Please fill the fields:" << std::endl;
	std::cout << "First name: ";
	getline(std::cin, this->firstName);
	std::cout << "Last name: ";
	getline(std::cin, this->lastName);
	std::cout << "Nickname: ";
	getline(std::cin, this->nickname);
	std::cout << "Login: ";
	getline(std::cin, this->login);
	std::cout << "Postal address: ";
	getline(std::cin, this->postalAddress);
	std::cout << "Email: ";
	getline(std::cin, this->email);
	std::cout << "Phone number: ";
	getline(std::cin, this->phoneNumber);
	std::cout << "Birthday date: ";
	getline(std::cin, this->birthdayDate);
	std::cout << "Favorite meal: ";
	getline(std::cin, this->favoriteMeal);
	std::cout << "Underwear color: ";
	getline(std::cin, this->underwearColor);
	std::cout << "Darkest secret: ";
	getline(std::cin, this->darkestSecret);
}

void	Contact::displayContent() const {
	std::cout << "First name: ";
	std::cout << this->firstName << std::endl;
	std::cout << "Last name: ";
	std::cout << this->lastName << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->nickname << std::endl;
	std::cout << "Login: ";
	std::cout << this->login << std::endl;
	std::cout << "Postal address: ";
	std::cout << this->postalAddress << std::endl;
	std::cout << "Email: ";
	std::cout << this->email << std::endl;
	std::cout << "Phone number: ";
	std::cout << this->phoneNumber << std::endl;
	std::cout << "Birthday date: ";
	std::cout << this->birthdayDate << std::endl;
	std::cout << "Favorite meal: ";
	std::cout << this->favoriteMeal << std::endl;
	std::cout << "Underwear color: ";
	std::cout << this->underwearColor << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << this->darkestSecret << std::endl;
}
