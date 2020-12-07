#include <iostream>
#include "Pony.hpp"

Pony::Pony() {
}

Pony::~Pony() {
}

void	Pony::say(std::string phrase) {
	std::cout << phrase << std::endl;
}

void	ponyOnTheHeap() {
	Pony	*heapy = new Pony;
	heapy->say("Hey! I'm Heapy. I'm pony and I live on heap");
	delete heapy;
}

void	ponyOnTheStack() {
	Pony	stacky;
	stacky.say("Hello! I'm pony. My name is Stacky and I live on stack");
}