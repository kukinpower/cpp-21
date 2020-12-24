#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3, SCAV_TYPE){

	std::cout << this->_type << "(ScavTrap) Constructor called. Name: " << GREEN(this->_name) << std::endl;
	std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Glitching weirdness is a term of endearment, right?" << RESET << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << this->_type << "(ScavTrap) Destructor called. Name: " << GREEN(this->_name) << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {

	*this = copy;
	std::cout << this->_type << "(ScavTrap) Copy constructor called. Name: " << GREEN(this->_name) << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy) {

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

void	ScavTrap::challengeNewcomer() {

	if (this->isAlive()) {
		if (this->_energyPoints < 25) {
			std::cout << this->_type << GREEN(this->_name) << " is out of energy" << std::endl;
			std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Can't challenge you, I'm low..." << RESET << std::endl;
			return ;
		} else {
			std::string phrases[] = {"Discover some new framework!",
									 "Go get 1000 wallets!",
									 "Go evaluate some peers projects!",
									 "Go write your webserv on C++. Using c++98 of course.",
									 "Hmm... Maybe write some big website on ruby?",
									 "Pass the C++ exam rank 05"};
			this->_energyPoints -= 25;
			std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << phrases[rand() % 6] << RESET << std::endl;
		}
	} else {
		this->cantDo();
	}
}
