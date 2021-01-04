#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter {

public:
	Character();
	Character(const Character &copy);
	virtual ~Character();
	Character &operator=(const Character &copy);

	std::string const & getName() const;

private:
	std::string _name;

};

#endif
