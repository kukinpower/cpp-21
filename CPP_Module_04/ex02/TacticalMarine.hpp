#ifndef TACTICALMARINE_CLASS_HPP
#define TACTICALMARINE_CLASS_HPP
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &copy);
	virtual ~TacticalMarine();
	TacticalMarine &operator=(const TacticalMarine &copy);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

private:

};

#endif
