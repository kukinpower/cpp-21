#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	vlc = new Squad;
	bob = new TacticalMarine;
	jim = new AssaultTerminator;
	vlc->push(bob);
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jim);
	std::cout << vlc->getCount() << std::endl;
	delete vlc;

	return 0;
}

//Output :
//$> clang++ -W -Wall -Werror *.cpp
//$> ./a.out | cat -e
//Tactical Marine ready for battle!$
//* teleports from space *$
//For the holy PLOT!$
//* attacks with a bolter *$
//* attacks with a chainsword *$
//This code is unclean. PURIFY IT!$
//* does nothing *$
//* attacks with chainfists *$
//Aaargh...$
//I'll be back...$
