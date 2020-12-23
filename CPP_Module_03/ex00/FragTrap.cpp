#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100),
										_energyPoints(100), _maxEnergyPoints(100), _lvl(1),
										_meleeAttackDamage(30), _rangedAttackDamage(20),
										_armorDamageReduction(5) {

	std::cout << "Constructor called. Name: " << GREEN(this->_name) << std::endl;
	std::cout << "FR4G-TP " << GREEN(this->_name) << " says: " << KHAKI_SET << "Look out everybody! Things are about to get awesome!" << RESET << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "Destructor called. Name: " << GREEN(this->_name) << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {

	*this = copy;
	std::cout << "Copy constructor called. Name: " << GREEN(this->_name) << std::endl;
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
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target) {

	if (this->isAlive()) {
		std::cout << "FR4G-TP " << GREEN(this->_name) << " attacks " << target;
		std::cout << " at range, causing " << RED_SET << this->_rangedAttackDamage << " points of damage" << RESET << "!" << std::endl;
		std::cout << "FR4G-TP " << GREEN(this->_name) << " says: " << KHAKI_SET << "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << RESET << std::endl;
	} else {
		this->cantDo();
	}
}

void	FragTrap::meleeAttack(std::string const & target) {

	if (this->isAlive()) {
		std::cout << "FR4G-TP " << GREEN(this->_name) << " attacks " << target;
		std::cout << " in melee, causing " << RED_SET << this->_rangedAttackDamage << " points of damage" << RESET << "!" << std::endl;
		std::cout << "FR4G-TP " << GREEN(this->_name) << " says: " << KHAKI_SET << "Ready for the PUNCHline?!" << RESET << std::endl;
	} else {
		this->cantDo();
	}
}

void	FragTrap::takeDamage(unsigned int amount) {

	if (this->_hitPoints != 0) {
		unsigned int damage = amount - this->_armorDamageReduction;
		if (this->_hitPoints < damage) {
			this->_hitPoints = 0;
		} else {
			this->_hitPoints -= damage;
		}
		std::cout << "FR4G-TP " <<  GREEN(this->_name) << " got " << RED_SET << damage << " damage" << RESET << ".";
		if (this->_hitPoints == 0) {
			std::cout << " And it was " << RED_SET << "fatal" << RESET << "." << std::endl;
			std::cout << "FR4G-TP " << GREEN(this->_name) << " says: " << KHAKI_SET << "Ow hohoho, that hurts! Yipes!" << RESET << std::endl;
		} else {
			std::cout << " And now it has " << RED_SET << this->_hitPoints << "hp" << RESET << "." << std::endl;
			std::cout << "FR4G-TP " << GREEN(this->_name) << " says: " << KHAKI_SET << "Why do I even feel pain?!" << RESET << std::endl;
		}
	}
	else {
		std::cout << "FR4G-TP " << GREEN(this->_name) << " can't take any more damage because it already has " << RED_SET << this->_hitPoints << "hp" << RESET << "." << std::endl;
		std::cout << "FR4G-TP " << GREEN(this->_name) << " says: " << KHAKI_SET << "Get away from me!" << RESET << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount) {

	if (this->_hitPoints == this->_maxHitPoints) {
		std::cout << "FR4G-TP " << GREEN(this->_name) << " is absolutely okay and don't need a repair. " << SPRING_GREEN_SET << "Current HP: " << this->_hitPoints << RESET << std::endl;
		return ;
	} else if (this->_hitPoints + amount > this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
	} else {
		this->_hitPoints += amount;
	}
	std::cout << "FR4G-TP " << GREEN(this->_name) << " repaired. " << SPRING_GREEN_SET << "Current HP: " << this->_hitPoints << RESET << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {

	if (this->_energyPoints < 25) {
		std::cout << "FR4G-TP " << GREEN(this->_name) << " is out of energy" << std::endl;
		std::cout << "FR4G-TP " << GREEN(this->_name) << " says: " << KHAKI_SET << "Can't touch this!" << RESET << std::endl;
		return ;
	} else {
		std::string phrases[] = {"This time it'll be awesome, I promise!",
								 "Hey everybody, check out my package!",
								 "Place your bets!",
								 "Defragmenting!",
								 "Recompiling my combat code!",
								 "Running the sequencer!"};
		this->_energyPoints -= 25;
		std::cout << "FR4G-TP " << GREEN(this->_name) << " attacks " << target << std::endl;
		std::cout << "FR4G-TP " << GREEN(this->_name) << " says: " << KHAKI_SET << phrases[rand() % 6] << RESET << std::endl;
	}
}

bool 	FragTrap::isAlive() const {

	if (this->_hitPoints > 0)
		return true;
	return false;
}

void 	FragTrap::cantDo() const {

	std::cout << "FR4G-TP " << GREEN(this->_name) << " has only " << RED_SET << this->_hitPoints << " hp" << RESET << ". And can't do anything." << std::endl;
}