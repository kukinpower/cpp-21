#ifndef NINJATRAP_CLASS_HPP
#define NINJATRAP_CLASS_HPP
#include <iostream>
#include <cstdlib>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define GREEN(x) ("\033[32m" + x + "\033[0m")
#define RED_SET "\033[0;31m"
#define KHAKI_SET "\033[38;2;240;230;140m"
#define RESET "\033[0m"
#define SPRING_GREEN_SET "\033[38;2;0;255;127m"
#define	WITH_BG "\033[48;2;0;250;154m\033[38;2;0;0;0m"

#define NINJA_TYPE "NINJ4-TP"

class NinjaTrap : virtual public ClapTrap {

public:
	NinjaTrap(std::string name = "default");
	NinjaTrap(const NinjaTrap &copy);
	~NinjaTrap();
	NinjaTrap &operator=(const NinjaTrap &copy);

	void	ninjaShoebox(ClapTrap &target);
	void	ninjaShoebox(FragTrap &target);
	void	ninjaShoebox(ScavTrap &target);
	void	ninjaShoebox(NinjaTrap &target);

	void 	meleeAttack(std::string const & target);

protected:
	void 	setHp(unsigned int i = 60);
	void 	setMaxHp(unsigned int i = 60);
	void 	setEp(unsigned int i = 120);
	void 	setMaxEp(unsigned int i = 120);
	void 	setLvl(unsigned int i = 1);
	void 	setMeleeDmg(unsigned int i = 60);
	void 	setRangedDmg(unsigned int i = 5);
	void 	setArmorDmgReduction(unsigned int i = 0);

};

#endif
