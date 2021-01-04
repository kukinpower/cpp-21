#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < CAPACITY; i++) {
		_knowledgeBase[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < CAPACITY; i++) {
		if (_knowledgeBase[i] != nullptr)
			delete _knowledgeBase[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {

	*this = copy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy) {

	for (int i = 0; i < CAPACITY; i++) {
		if (_knowledgeBase[i] != nullptr)
			delete _knowledgeBase[i];
		_knowledgeBase[i] = copy._knowledgeBase[i]->clone();
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria *m) {

	if (m == nullptr) {
		return ;
	}

	for (int i = 0; i < CAPACITY; i++) {
		if (_knowledgeBase[i] == nullptr) {
			_knowledgeBase[i] = m;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < CAPACITY; i++) {
		if (_knowledgeBase[i]->getType() == type) {
			return _knowledgeBase[i]->clone();
		}
	}
	return nullptr;
}
