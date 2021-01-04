#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria {

public:
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &copy);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

private:
	unsigned int	_xp;
	std::string		_type;
	AMateria();
};

#endif
