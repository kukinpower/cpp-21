#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP
# include <iostream>

class Weapon {

public:
	Weapon(std::string type = "default");
	~Weapon();
	std::string const 	&getType() const;
	void 				setType(std::string type);

private:
	std::string _type;

};

#endif
