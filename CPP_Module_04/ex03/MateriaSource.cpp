#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

}

MateriaSource::~MateriaSource() {

}

MateriaSource::MateriaSource(const MateriaSource &copy) {

	*this = copy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy) {

	return *this;
}

void MateriaSource::learnMateria(AMateria*) {
//must copy the Materia passed as parameter, and store it in memory
//to be cloned later. Much in the same way as for Character , the Source can know at
//most 4 Materia, which are not necessarily unique

}

AMateria* MateriaSource::createMateria(std::string const & type) {
//will return a new Materia, which will be a
//copy of the Materia (previously learned by the Source) which type equals the parameter.
//Returns 0 if the type is unknown.

}
