#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100),
										_energyPoints(50), _maxEnergyPoints(50), _lvl(1),
										_meleeAttackDamage(20), _rangedAttackDamage(15),
										_armorDamageReduction(3) {

	std::cout << SCAVTRAP << "Constructor called. Name: " << GREEN(this->_name) << std::endl;
	std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "Glitching weirdness is a term of endearment, right?" << RESET << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << SCAVTRAP << "Destructor called. Name: " << GREEN(this->_name) << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {

	*this = copy;
	std::cout << SCAVTRAP << "Copy constructor called. Name: " << GREEN(this->_name) << std::endl;
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
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target) {

	if (this->isAlive()) {
		std::cout << SCAVTRAP << GREEN(this->_name) << " attacks " << target;
		std::cout << " at range, causing " << RED_SET << this->_rangedAttackDamage << " points of damage" << RESET << "!" << std::endl;
		std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA!" << RESET << std::endl;
	} else {
		this->cantDo();
	}
}

void	ScavTrap::meleeAttack(std::string const & target) {

	if (this->isAlive()) {
		std::cout << SCAVTRAP << GREEN(this->_name) << " attacks " << target;
		std::cout << " in melee, causing " << RED_SET << this->_rangedAttackDamage << " points of damage" << RESET << "!" << std::endl;
		std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "This is why I was built!" << RESET << std::endl;
	} else {
		this->cantDo();
	}
}

void	ScavTrap::takeDamage(unsigned int amount) {

	if (amount > 0 && amount > this->_armorDamageReduction) {
		if (this->_hitPoints != 0) {
			unsigned int damage = amount - this->_armorDamageReduction;
			if (this->_hitPoints < damage) {
				this->_hitPoints = 0;
			} else {
				this->_hitPoints -= damage;
			}
			std::cout << SCAVTRAP <<  GREEN(this->_name) << " got " << RED_SET << damage << " damage" << RESET << ".";
			if (this->_hitPoints == 0) {
				std::cout << " And it was " << RED_SET << "fatal" << RESET << "." << std::endl;
				std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "Ow hohoho, that hurts! Yipes!" << RESET << std::endl;
			} else {
				std::cout << " And now it has " << RED_SET << this->_hitPoints << "hp" << RESET << "." << std::endl;
				std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "Like running over a bug!" << RESET << std::endl;
			}
		}
		else {
			std::cout << SCAVTRAP << GREEN(this->_name) << " can't take any more damage because it already has " << RED_SET << this->_hitPoints << "hp" << RESET << "." << std::endl;
			std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "Get away from me!" << RESET << std::endl;
		}
	} else if (amount > 0) {
		std::cout << SCAVTRAP << GREEN(this->_name) << " Doesn't get any damage. " RED_SET << amount << " damage" << RESET << " is lower then armor damage reduction. " << SPRING_GREEN_SET << "Armor damage reduction: " << this->_armorDamageReduction << RESET << std::endl;
		std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "There is no way this ends badly!" << RESET << std::endl;
	} else {
		std::cout << SCAVTRAP << GREEN(this->_name) << " Doesn't get any damage. There is something wrong with damage amount. " << RED_SET << amount << " damage" << RESET << ". " << "Really?" << std::endl;
		std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "Holy moly!" << RESET << std::endl;
	}

}

void	ScavTrap::beRepaired(unsigned int amount) {

	if (this->_hitPoints == this->_maxHitPoints) {
		std::cout << SCAVTRAP << GREEN(this->_name) << " is absolutely okay and don't need a repair. " << SPRING_GREEN_SET << "Current HP: " << this->_hitPoints << RESET << std::endl;
		return ;
	} else if (this->_hitPoints + amount > this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
	} else {
		this->_hitPoints += amount;
	}
	std::cout << SCAVTRAP << GREEN(this->_name) << " repaired. " << SPRING_GREEN_SET << "Current HP: " << this->_hitPoints << RESET << std::endl;
}

void	ScavTrap::challengeNewcomer() {

	if (this->isAlive()) {
		if (this->_energyPoints < 25) {
			std::cout << SCAVTRAP << GREEN(this->_name) << " is out of energy" << std::endl;
			std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << "Can't challenge you, I'm low..." << RESET << std::endl;
			return ;
		} else {
			std::string phrases[] = {"Discover some new framework!",
									 "Go get 1000 wallets!",
									 "Go evaluate some peers projects!",
									 "Go write your webserv on C++. Using c++98 of course.",
									 "Hmm... Maybe write some big website on ruby?",
									 "Pass the C++ exam rank 05"};
			this->_energyPoints -= 25;
			std::cout << SCAVTRAP << GREEN(this->_name) << " says: " << KHAKI_SET << phrases[rand() % 6] << RESET << std::endl;
		}
	} else {
		this->cantDo();
	}
}

bool 	ScavTrap::isAlive() const {

	if (this->_hitPoints > 0)
		return true;
	return false;
}

void 	ScavTrap::cantDo() const {

	std::cout << SCAVTRAP << GREEN(this->_name) << " has only " << RED_SET << this->_hitPoints << "hp" << RESET << ". And can't do anything." << std::endl;
}