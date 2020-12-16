#include "File.hpp"

File::File(const std::string& path) : _path(path) {

}

File::~File() {

}

void 	File::fileOpen() {

	this->_file.open(this->_path);
	if (!this->_file.is_open()) {
		std::cerr << "File was not open" << std::endl;
		exit(1);
	}
}

void 	File::fileRead() {

	this->fileOpen();
	this->_buf << this->_file.rdbuf();
	std::cout << this->_buf.str();
	this->_file.close();
}
