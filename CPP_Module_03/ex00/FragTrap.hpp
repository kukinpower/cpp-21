#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP
#include <iostream>

class FragTrap {

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	FragTrap &operator=(const FragTrap &copy);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	int		_hitPoints;
	int 	_maxHitPoints;
	int 	_energyPoints;
	int 	_maxEnergyPoints;
	int 	_lvl;
	std::string _name;
	int 	_meleeAttackDamage;
	int 	_rangedAttackDamage;
	int 	_armorDamageReduction;
};

#endif
