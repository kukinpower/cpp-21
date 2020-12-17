#include "File.hpp"

File::File(const std::string& path) : _path(path) {

}

File::~File() {

}

bool 	File::fileOpen() {

	this->_file.open(this->_path);
	if (this->_file.fail()) {
		std::cerr << "cat: " << this->_path << ": " << std::strerror(errno) << std::endl;
		return true;
	}
	return false;
}

void 	File::fileRead() {

	if (this->fileOpen()) {
		return ;
	}
	this->_buf << this->_file.rdbuf();
	std::cout << this->_buf.str();
	this->_file.close();
}
