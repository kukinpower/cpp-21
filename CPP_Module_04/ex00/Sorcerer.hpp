#ifndef SORCERER_CLASS_HPP
#define SORCERER_CLASS_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer {

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &copy);
	~Sorcerer();
	Sorcerer &operator=(const Sorcerer &copy);

	std::string getName() const;
	std::string getTitle() const;

	void polymorph(Victim const &obj) const;

private:
	std::string	_name;
	std::string	_title;

	Sorcerer();
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &obj);

#endif
