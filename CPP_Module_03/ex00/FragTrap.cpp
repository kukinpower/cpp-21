#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100),
										_energyPoints(100), _maxEnergyPoints(100), _lvl(1),
										_meleeAttackDamage(30), _rangedAttackDamage(20),
										_armorDamageReduction(5) {

	std::cout << "Constructor called" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {

}

FragTrap	&FragTrap::operator=(const FragTrap &copy) {

	return *this;
}

void	FragTrap::rangedAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {

}

void	FragTrap::takeDamage(unsigned int amount) {

}

void	FragTrap::beRepaired(unsigned int amount) {

}
