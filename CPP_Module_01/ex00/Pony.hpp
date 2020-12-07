#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

class Pony {
public:
	Pony();
	~Pony();

	void	say(std::string phrase);
};

void	ponyOnTheHeap();
void	ponyOnTheStack();

#endif