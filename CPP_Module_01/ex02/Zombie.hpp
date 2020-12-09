#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

class Zombie {
public:
	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce() const;

private:
	std::string	_name;
	std::string	_type;
};

#endif