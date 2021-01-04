#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource {

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &copy);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

private:

};

#endif
