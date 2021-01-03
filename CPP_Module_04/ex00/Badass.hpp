#ifndef BADASS_CLASS_HPP
#define BADASS_CLASS_HPP
#include <iostream>
#include "Victim.hpp"

class Badass : public Victim {

public:
	Badass(std::string name);
	Badass(const Badass &copy);
	virtual ~Badass();
	Badass &operator=(const Badass &copy);

	void getPolymorphed() const;

private:
	Badass();
};

#endif
