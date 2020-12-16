#ifndef FILE_CLASS_HPP
#define FILE_CLASS_HPP
#include <iostream>
#include <fstream>
#include <sstream>

class File {

public:
	File(const std::string& path, const std::string& from, const std::string& to);
	~File();
	void 	fileOpen();
	void 	fileRead();
	void 	fileReplace();
	void 	fileCreateReplace();

private:
	std::string			_path;
	std::string			_from;
	std::string			_to;
	std::ifstream		_srcFile;
	std::ofstream		_replaceFile;
	std::stringstream	_buf;
	std::string 		_lineBuf;
};

#endif
