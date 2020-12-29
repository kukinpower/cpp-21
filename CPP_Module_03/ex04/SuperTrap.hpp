#ifndef SUPERTRAP_CLASS_HPP
#define SUPERTRAP_CLASS_HPP
#include <iostream>
#include <cstdlib>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

#define GREEN(x) ("\033[32m" + x + "\033[0m")
#define RED_SET "\033[0;31m"
#define KHAKI_SET "\033[38;2;240;230;140m"
#define RESET "\033[0m"
#define SPRING_GREEN_SET "\033[38;2;0;255;127m"
#define	WITH_BG "\033[48;2;0;250;154m\033[38;2;0;0;0m"

#define SUPER_TYPE "SUPER-TP"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap(std::string name = "default");
	SuperTrap(const SuperTrap &copy);
	~SuperTrap();
	SuperTrap &operator=(const SuperTrap &copy);

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
};

#endif
