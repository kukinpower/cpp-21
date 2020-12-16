#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon const &weapon);
	~HumanA();
	void attack();

//Make it so the following code produces attacks with "crude spiked club" THEN "some
//other type of club", in both test cases:

private:
	std::string		_name;
	Weapon const	&_weapon;
};

#endif
