#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &copy);

	virtual void learnMateria(AMateria *m);
	virtual AMateria* createMateria(std::string const & type);

private:
	AMateria	*_knowledgeBase[CAPACITY];

};

#endif
