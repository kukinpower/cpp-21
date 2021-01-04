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

	Squad* new_vlc = new Squad;
	bob = new TacticalMarine;
	jim = new AssaultTerminator;
	new_vlc->push(bob);
	new_vlc->push(bob);
	new_vlc->push(jim);
	new_vlc->push(jim);
	std::cout << "new_vlc count: " << new_vlc->getCount() << std::endl;

	Squad copy = Squad(*new_vlc);
	std::cout << "copy count: " << copy.getCount() << std::endl;

	delete new_vlc;

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
