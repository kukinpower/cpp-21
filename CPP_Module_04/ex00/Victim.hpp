#ifndef VICTIM_CLASS_HPP
#define VICTIM_CLASS_HPP
#include <iostream>

class Victim {

public:
	Victim(std::string name);
	Victim(const Victim &copy);
	virtual ~Victim();
	Victim &operator=(const Victim &copy);

	std::string getName() const;
	virtual void getPolymorphed() const;

private:
	std::string	_name;

protected:
	Victim();
};

std::ostream &operator<<(std::ostream &out, const Victim &obj);

#endif
