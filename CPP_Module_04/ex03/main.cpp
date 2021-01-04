#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete me;
	delete src;

	std::cout << "--------- TEST ---------" << std::endl;

	IMateriaSource* newSrc = new MateriaSource();
	newSrc->learnMateria(new Ice());
	newSrc->learnMateria(new Cure());
	newSrc->learnMateria(new Ice());
	newSrc->learnMateria(new Cure());
	ICharacter *person = new Character("person");

	tmp = newSrc->createMateria("cure");
	person->equip(tmp);
	person->use(0, *bob);
	tmp = newSrc->createMateria("cure");
	person->equip(tmp);
	person->use(1, *bob);
	tmp = newSrc->createMateria("ice");
	person->equip(tmp);
	person->use(2, *bob);
	tmp = newSrc->createMateria("ice");
	person->equip(tmp);
	person->use(3, *bob);
//	tmp = newSrc->createMateria("ice");
//	person->equip(tmp);
//	person->use(4, *bob);
	delete person;
	delete newSrc;
	delete bob;
	return 0;
}

/*
$> clang++ -W -Wall -Werror *.cpp
$> ./a.out | cat -e
* shoots an ice bolt at bob *$
* heals bob's wounds *$
*/
