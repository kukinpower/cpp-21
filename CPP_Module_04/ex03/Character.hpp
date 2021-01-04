#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter {

public:
	Character(std::string name = "materia");
	Character(const Character &copy);
	virtual ~Character();
	Character &operator=(const Character &copy);

	std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	bool isEquipped(AMateria *m);

private:
	std::string _name;
	AMateria	*_inventory[CAPACITY];

};

#endif
