#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Badass.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::endl;
	Badass	badass("Bad");
	std::cout << badass;
	robert.polymorph(badass);
	return 0;
}

//$> clang++ -W -Wall -Werror *.cpp
//$> ./a.out | cat -e
//Robert, the Magnificent, is born!$
//Some random victim called Jimmy just appeared!$
//Some random victim called Joe just appeared!$
//Zog zog.$
//I am Robert, the Magnificent, and I like ponies!$
//I'm Jimmy and I like otters!$
//I'm Joe and I like otters!$
//Jimmy has been turned into a cute little sheep!$
//Joe has been turned into a pink pony!$
//Bleuark...$
//Victim Joe just died for no apparent reason!$
//Victim Jimmy just died for no apparent reason!$
//Robert, the Magnificent, is dead. Consequences will never be the same!$
//$>