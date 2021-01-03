#ifndef PEON_CLASS_HPP
#define PEON_CLASS_HPP
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {

public:
	Peon(std::string name);
	Peon(const Peon &copy);
	virtual ~Peon();
	Peon &operator=(const Peon &copy);

	void getPolymorphed() const;

private:
	Peon();
};

#endif
