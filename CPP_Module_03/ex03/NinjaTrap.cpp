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
