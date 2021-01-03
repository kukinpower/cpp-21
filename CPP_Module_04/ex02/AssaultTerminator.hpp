#ifndef ASSAULTTERMINATOR_CLASS_HPP
#define ASSAULTTERMINATOR_CLASS_HPP
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &copy);
	virtual ~AssaultTerminator();
	AssaultTerminator &operator=(const AssaultTerminator &copy);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

private:

};

#endif
