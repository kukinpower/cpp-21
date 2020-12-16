#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP
# include <iostream>

class Weapon {

public:
	Weapon(std::string type = "default");
	~Weapon();

private:
	std::string _type;
};

#endif
