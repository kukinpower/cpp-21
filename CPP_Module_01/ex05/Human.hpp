#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP
# include <iostream>

class Human {

public:
	Human();
	~Human();
	std::string identify() const;
	Brain const &getBrain() const;

private:
	Brain const _someBrain;

//has a constant Brain attribute, with the same lifetime.
};

#endif
