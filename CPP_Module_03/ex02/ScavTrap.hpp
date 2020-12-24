#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP
#include <iostream>
#include <cstdlib>

#include "ClapTrap.hpp"

#define GREEN(x) ("\033[32m" + x + "\033[0m")
#define RED_SET "\033[0;31m"
#define KHAKI_SET "\033[38;2;240;230;140m"
#define RESET "\033[0m"
#define SPRING_GREEN_SET "\033[38;2;0;255;127m"
#define SCAV_TYPE "SC4V-TP"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string name = "default");
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &copy);

	void	challengeNewcomer();
};

#endif
