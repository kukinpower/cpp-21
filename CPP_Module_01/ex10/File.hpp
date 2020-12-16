#ifndef FILE_CLASS_HPP
#define FILE_CLASS_HPP
#include <iostream>
#include <fstream>
#include <sstream>

class File {

public:
	File(const std::string& path);
	~File();
	void 	fileOpen();
	void 	fileRead();

private:
	std::string			_path;
	std::ifstream		_file;
	std::stringstream	_buf;
	std::string 		_lineBuf;
};

#endif
