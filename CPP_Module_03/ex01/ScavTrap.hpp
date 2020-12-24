#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP
#include <iostream>
#include <cstdlib>

#define GREEN(x) ("\033[32m" + x + "\033[0m")
#define RED_SET "\033[0;31m"
#define KHAKI_SET "\033[38;2;240;230;140m"
#define RESET "\033[0m"
#define SPRING_GREEN_SET "\033[38;2;0;255;127m"
#define SCAVTRAP "SCAVTRAP "

class ScavTrap {

public:
	ScavTrap(std::string name = "default");
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &copy);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
	bool 	isAlive() const;
	void 	cantDo() const;

private:
	unsigned int	_hitPoints;
	unsigned int 	_maxHitPoints;
	unsigned int 	_energyPoints;
	unsigned int 	_maxEnergyPoints;
	unsigned int 	_lvl;
	std::string		_name;
	unsigned int 	_meleeAttackDamage;
	unsigned int 	_rangedAttackDamage;
	unsigned int 	_armorDamageReduction;
};

#endif
