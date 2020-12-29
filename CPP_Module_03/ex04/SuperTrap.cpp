#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(), FragTrap(), NinjaTrap() {

	_name = name;
	FragTrap::setHp();
	FragTrap::setMaxHp();
	NinjaTrap::setEp();
	NinjaTrap::setMaxEp();
	_lvl = 1;
	NinjaTrap::setMeleeDmg();
	FragTrap::setRangedDmg();
	FragTrap::setArmorDmgReduction();
	_type = SUPER_TYPE;
	_type += " ";

	std::cout << this->_type << "(SuperTrap) Constructor called. Name: " << GREEN(this->_name) << std::endl;
	std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Look out everybody! Things are about to get SUPER awesome!" << RESET << std::endl;
}

SuperTrap::~SuperTrap() {

	std::cout << this->_type << "(SuperTrap) Destructor called. Name: " << GREEN(this->_name) << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy), FragTrap(copy), NinjaTrap(copy) {

	*this = copy;
	std::cout << this->_type << "(SuperTrap) Copy constructor called. Name: " << GREEN(this->_name) << std::endl;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &copy) {

	this->_hitPoints = copy._hitPoints;
	this->_maxHitPoints = copy._maxHitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_maxEnergyPoints = copy._maxEnergyPoints;
	this->_lvl = copy._lvl;
	this->_name = copy._name;
	this->_meleeAttackDamage = copy._meleeAttackDamage;
	this->_rangedAttackDamage = copy._rangedAttackDamage;
	this->_armorDamageReduction = copy._armorDamageReduction;
	this->_type = copy._type;
	return *this;
}
