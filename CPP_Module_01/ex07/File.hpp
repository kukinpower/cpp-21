#ifndef FILE_CLASS_HPP
# define FILE_CLASS_HPP
# include <iostream>

class File {

public:
	File(const std::string& path, const std::string& from, const std::string& to);
	~File();
	void 	fileOpen();
	void 	fileReplace();

private:
	std::string		_path;
	std::string		_from;
	std::string		_to;
};

#endif
