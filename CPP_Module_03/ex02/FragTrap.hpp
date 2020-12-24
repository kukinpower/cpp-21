#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP
#include <iostream>
#include <cstdlib>

#include "ClapTrap.hpp"

#define GREEN(x) ("\033[32m" + x + "\033[0m")
#define RED_SET "\033[0;31m"
#define KHAKI_SET "\033[38;2;240;230;140m"
#define RESET "\033[0m"
#define SPRING_GREEN_SET "\033[38;2;0;255;127m"
#define	WITH_BG "\033[48;2;0;250;154m\033[38;2;0;0;0m"

#define FRAG_TYPE "FR4G-TP"

class FragTrap : public ClapTrap {

public:
	FragTrap(std::string name = "default");
	FragTrap(const FragTrap &copy);
	~FragTrap();
	FragTrap &operator=(const FragTrap &copy);

	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
