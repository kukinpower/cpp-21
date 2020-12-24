#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 25, 25, 15, FRAG_TYPE) {

	std::cout << this->_type << "(FragTrap) Constructor called. Name: " << GREEN(this->_name) << std::endl;
	std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Look out everybody! Things are about to get awesome!" << RESET << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << this->_type << "(FragTrap) Destructor called. Name: " << GREEN(this->_name) << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {

	*this = copy;
	std::cout << this->_type << "(FragTrap) Copy constructor called. Name: " << GREEN(this->_name) << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy) {

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

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {

	if (this->isAlive()) {
		if (this->_energyPoints < 25) {
			std::cout << this->_type << GREEN(this->_name) << " is out of energy" << std::endl;
			std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Can't touch this!" << RESET << std::endl;
			return ;
		} else {
			std::string phrases[] = {"This time it'll be awesome, I promise!",
									 "Hey everybody, check out my package!",
									 "Place your bets!",
									 "Defragmenting!",
									 "Recompiling my combat code!",
									 "Running the sequencer!"};
			this->_energyPoints -= 25;
			std::cout << this->_type << GREEN(this->_name) << " attacks " << target << std::endl;
			std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << phrases[rand() % 6] << RESET << std::endl;
		}
	} else {
		this->cantDo();
	}
}
