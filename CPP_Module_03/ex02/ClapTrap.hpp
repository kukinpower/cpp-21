#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP
#include <iostream>
#include <cstdlib>

#define GREEN(x) ("\033[32m" + x + "\033[0m")
#define RED_SET "\033[0;31m"
#define KHAKI_SET "\033[38;2;240;230;140m"
#define RESET "\033[0m"
#define SPRING_GREEN_SET "\033[38;2;0;255;127m"
#define	WITH_BG "\033[48;2;0;250;154m\033[38;2;0;0;0m"

#define CLAP_TYPE "CL4P-TP"

class ClapTrap {

public:
	ClapTrap(unsigned int hitPoints = 100,
				unsigned int maxHitPoints = 100,
				unsigned int energyPoints = 100,
				unsigned int maxEnergyPoints = 100,
				unsigned int lvl = 1,
				std::string name = "default",
				unsigned int meleeAttackDamage = 25,
				unsigned int rangedAttackDamage = 25,
				unsigned int armorDamageReduction = 15,
				std::string type = CLAP_TYPE);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &copy);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	bool 	isAlive() const;
	void 	cantDo() const;

protected:
	unsigned int	_hitPoints;
	unsigned int 	_maxHitPoints;
	unsigned int 	_energyPoints;
	unsigned int 	_maxEnergyPoints;
	unsigned int 	_lvl;
	std::string		_name;
	unsigned int 	_meleeAttackDamage;
	unsigned int 	_rangedAttackDamage;
	unsigned int 	_armorDamageReduction;

	std::string 	_type;
};

#endif
