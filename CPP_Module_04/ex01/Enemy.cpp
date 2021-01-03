#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {

}

Enemy::~Enemy() {

}

Enemy::Enemy(const Enemy &copy) {

	*this = copy;
}

Enemy	&Enemy::operator=(const Enemy &copy) {

	_type = copy._type;
	_hp = copy._hp;
	return *this;
}

std::string const Enemy::getType() const {

	return _type;
}

int Enemy::getHP() const {

	return _hp;
}

void Enemy::takeDamage(int damage) {

	if (damage < 0)
		return ;
	if (damage > _hp)
		_hp = 0;
	else
		_hp -= damage;
}
