#include "Squad.hpp"

Squad::Squad() : _squad(nullptr), _count(0) {

}

Squad::~Squad() {

	if (_squad != nullptr)
		freeSquad();
}

Squad::Squad(const Squad &copy) {

	*this = copy;
}

Squad	&Squad::operator=(const Squad &copy) {

	if (_count > 0) {
		freeSquad();
	}
	_squad = new ISpaceMarine*[copy._count];
	_count = copy._count;
	copySquadFromTmp(copy._squad);
	return *this;
}

int Squad::getCount() const {

	return _count;
}

ISpaceMarine* Squad::getUnit(int i) const {

	if (i > _count || i < 0)
		return nullptr;
	return _squad[i];
}

void	Squad::freeSquad() {

	for (int i = 0; i < _count; i++) {
		delete _squad[i];
	}
	delete[] _squad;
	_squad = nullptr;
	_count = 0;
}

bool	Squad::isInSquad(ISpaceMarine* unit) {

	for (int i = 0; i < _count; i++) {
		if (_squad[i] == unit) {
			return true;
		}
	}
	return false;
}

int 	Squad::copySquadFromTmp(ISpaceMarine **tmp) {

	int i = 0;

	while (i < _count) {
		_squad[i] = tmp[i]->clone();
		i++;
	}
	return i;
}

int 	Squad::copySquadToTmp(ISpaceMarine **tmp) {

	int i = 0;

	while (i < _count) {
		tmp[i] = _squad[i];
		i++;
	}
	return i;
}

int		Squad::push(ISpaceMarine* unit) {

	if (unit == nullptr || isInSquad(unit)) {
		return _count;
	}

	ISpaceMarine **tmp = new ISpaceMarine*[_count + 1];

	int i = copySquadToTmp(tmp);
	tmp[i] = unit;
	if (_squad != nullptr)
		delete[] _squad;
	_squad = tmp;
	_count++;

	return _count;
}
