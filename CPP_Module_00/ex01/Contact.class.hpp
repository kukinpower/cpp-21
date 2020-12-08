#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {
public:
	Contact();
	~Contact();

	void		displayContent() const;
	void		displayContentShort() const;
	void		fillContactInfo(int index);

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_email;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
	int			_index;
};

#endif