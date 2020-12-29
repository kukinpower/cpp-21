#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0, NINJA_TYPE) {

	std::cout << this->_type << "(NinjaTrap) Constructor called. Name: " << GREEN(this->_name) << std::endl;
	std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Look out everybody! Things are about to get awesome!" << RESET << std::endl;
}

NinjaTrap::~NinjaTrap() {

	std::cout << this->_type << "(NinjaTrap) Destructor called. Name: " << GREEN(this->_name) << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) {

	*this = copy;
	std::cout << this->_type << "(NinjaTrap) Copy constructor called. Name: " << GREEN(this->_name) << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &copy) {

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

void	NinjaTrap::ninjaShoebox(ClapTrap &target) {

	if (this->isAlive()) {
		std::cout << this->_type << GREEN(this->_name) << " attacks from the shadows." << std::endl;
		target.takeDamage(100);
	} else {
		this->cantDo();
	}
}

void	NinjaTrap::ninjaShoebox(FragTrap &target) {

	if (this->isAlive()) {
		std::cout << this->_type << GREEN(this->_name) << " attacks in the air." << std::endl;
		target.takeDamage(100);
	} else {
		this->cantDo();
	}
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target) {

	if (this->isAlive()) {
		std::cout << this->_type << GREEN(this->_name) << " suddenly attacks." << std::endl;
		target.takeDamage(100);
	} else {
		this->cantDo();
	}
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target) {

	if (this->isAlive()) {
		std::cout << this->_type << GREEN(this->_name) << " performs ninja attack." << std::endl;
		target.takeDamage(100);
	} else {
		this->cantDo();
	}
}

void	NinjaTrap::meleeAttack(std::string const & target) {

	if (this->isAlive()) {
		std::cout << this->_type << GREEN(this->_name) << " attacks " << target;
		std::cout << " in melee ninja-style, causing " << RED_SET << this->_rangedAttackDamage << " points of damage" << RESET << "!" << std::endl;
		std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Ready for the PUNCHline?!" << RESET << std::endl;
	} else {
		this->cantDo();
	}
}

void 	NinjaTrap::setHp(unsigned int i) {
	_hitPoints = i;
}

void 	NinjaTrap::setMaxHp(unsigned int i) {
	_maxHitPoints = i;
}

void 	NinjaTrap::setEp(unsigned int i) {
	_energyPoints = i;
}

void 	NinjaTrap::setMaxEp(unsigned int i) {
	_maxEnergyPoints = i;
}

void 	NinjaTrap::setLvl(unsigned int i) {
	_lvl = i;
}

void 	NinjaTrap::setMeleeDmg(unsigned int i) {
	_meleeAttackDamage = i;
}

void 	NinjaTrap::setRangedDmg(unsigned int i) {
	_rangedAttackDamage = i;
}

void 	NinjaTrap::setArmorDmgReduction(unsigned int i) {
	_armorDamageReduction = i;
}
