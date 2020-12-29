#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
_energyPoints(100), _maxEnergyPoints(100), _lvl(1), _name(name),
_meleeAttackDamage(25), _rangedAttackDamage(25),
_armorDamageReduction(15), _type(CLAP_TYPE) {

	this->_type += " ";
}

ClapTrap::ClapTrap(unsigned int hitPoints,
		 unsigned int maxHitPoints,
		 unsigned int energyPoints,
		 unsigned int maxEnergyPoints,
		 unsigned int lvl,
		 std::string name,
		 unsigned int meleeAttackDamage,
		 unsigned int rangedAttackDamage,
		 unsigned int armorDamageReduction,
		 std::string type) : _hitPoints(hitPoints), _maxHitPoints(maxHitPoints),
							_energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints), _lvl(lvl), _name(name),
							_meleeAttackDamage(meleeAttackDamage), _rangedAttackDamage(rangedAttackDamage),
							_armorDamageReduction(armorDamageReduction), _type(type + " ") {

	std::cout << this->_type << "(ClapTrap) Constructor called. Name: " << GREEN(this->_name) << std::endl;
	std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Look out everybody! Things are about to get awesome!" << RESET << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << this->_type << "(ClapTrap) Destructor called. Name: " << GREEN(this->_name) << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {

	*this = copy;
	std::cout << this->_type << "(ClapTrap) Copy constructor called. Name: " << GREEN(this->_name) << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy) {

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

void	ClapTrap::rangedAttack(std::string const & target) {

	if (this->isAlive()) {
		std::cout << this->_type << GREEN(this->_name) << " attacks " << target;
		std::cout << " at range, causing " << RED_SET << this->_rangedAttackDamage << " points of damage" << RESET << "!" << std::endl;
		std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << RESET << std::endl;
	} else {
		this->cantDo();
	}
}

void	ClapTrap::meleeAttack(std::string const & target) {

	if (this->isAlive()) {
		std::cout << this->_type << GREEN(this->_name) << " attacks " << target;
		std::cout << " in melee, causing " << RED_SET << this->_rangedAttackDamage << " points of damage" << RESET << "!" << std::endl;
		std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Ready for the PUNCHline?!" << RESET << std::endl;
	} else {
		this->cantDo();
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (amount > 0 && amount > this->_armorDamageReduction) {
		if (this->_hitPoints != 0) {
			unsigned int damage = amount - this->_armorDamageReduction;
			if (this->_hitPoints < damage) {
				this->_hitPoints = 0;
			} else {
				this->_hitPoints -= damage;
			}
			std::cout << this->_type <<  GREEN(this->_name) << " got " << RED_SET << damage << " damage" << RESET << ".";
			if (this->_hitPoints == 0) {
				std::cout << " And it was " << RED_SET << "fatal" << RESET << "." << std::endl;
				std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Ow hohoho, that hurts! Yipes!" << RESET << std::endl;
			} else {
				std::cout << " And now it has " << RED_SET << this->_hitPoints << "hp" << RESET << "." << std::endl;
				std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Why do I even feel pain?!" << RESET << std::endl;
			}
		}
		else {
			std::cout << this->_type << GREEN(this->_name) << " can't take any more damage because it already has " << RED_SET << this->_hitPoints << "hp" << RESET << "." << std::endl;
			std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Get away from me!" << RESET << std::endl;
		}
	} else if (amount > 0) {
		std::cout << this->_type << GREEN(this->_name) << " Doesn't get any damage. " RED_SET << amount << " damage" << RESET << " is lower then armor damage reduction. " << SPRING_GREEN_SET << "Armor damage reduction: " << this->_armorDamageReduction << RESET << std::endl;
		std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "I'm on a roll!" << RESET << std::endl;
	} else {
		std::cout << this->_type << GREEN(this->_name) << " Doesn't get any damage. There is something wrong with damage amount. " << RED_SET << amount << " damage" << RESET << ". " << "Really?" << std::endl;
		std::cout << this->_type << GREEN(this->_name) << " says: " << KHAKI_SET << "Disgusting. I love it!" << RESET << std::endl;
	}

}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_hitPoints == this->_maxHitPoints) {
		std::cout << this->_type << GREEN(this->_name) << " is absolutely okay and don't need a repair. " << SPRING_GREEN_SET << "Current HP: " << this->_hitPoints << RESET << std::endl;
		return ;
	} else if (this->_hitPoints + amount > this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
	} else {
		this->_hitPoints += amount;
	}
	std::cout << this->_type << GREEN(this->_name) << " repaired. " << SPRING_GREEN_SET << "Current HP: " << this->_hitPoints << RESET << std::endl;
}

bool 	ClapTrap::isAlive() const {

	if (this->_hitPoints > 0)
		return true;
	return false;
}

void 	ClapTrap::cantDo() const {

	std::cout << this->_type << GREEN(this->_name) << " has only " << RED_SET << this->_hitPoints << "hp" << RESET << ". And can't do anything." << std::endl;
}