#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP
#include <iostream>

class Enemy {

public:
	Enemy(int hp = 0, std::string const & type = "Basic");
	Enemy(const Enemy &copy);
	virtual ~Enemy();
	Enemy &operator=(const Enemy &copy);

	std::string const &getType() const;

	int getHP() const;
	virtual void takeDamage(int damage);

private:
	int 		_hp;
	std::string _type;
};

#endif
