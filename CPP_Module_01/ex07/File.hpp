#ifndef FILE_CLASS_HPP
# define FILE_CLASS_HPP
# include <iostream>

class File {

public:
	File(std::string path);
	~File();

private:
	std::string		_path;
};

#endif
