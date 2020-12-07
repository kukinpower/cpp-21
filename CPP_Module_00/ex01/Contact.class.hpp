#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {
public:
	Contact();
	~Contact();

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	email;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;
	int			index;

	void		setIndex(int n);
	void		add();
	void		displayContent() const;

};

#endif