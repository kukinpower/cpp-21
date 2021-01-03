#ifndef SQUAD_CLASS_HPP
#define SQUAD_CLASS_HPP
#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad {

public:
	Squad();
	Squad(const Squad &copy);
	virtual ~Squad();
	Squad &operator=(const Squad &copy);

	int getCount() const;
	ISpaceMarine* getUnit(int i) const;
	int push(ISpaceMarine* unit);

	bool	isInSquad(ISpaceMarine* unit);
	void	freeSquad();
	int		copySquad(ISpaceMarine **tmp);

private:
	ISpaceMarine	**_squad;
	int 			_count;
};

#endif
