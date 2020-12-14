#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

class Zombie {
public:
	Zombie(std::string name = "name", std::string type = "default");
	~Zombie();

	void		announce() const;
	void		setType(std::string type);
	void		setName(std::string name);
	std::string	generateName();

private:
	std::string	_name;
	std::string	_type;
};

#endif