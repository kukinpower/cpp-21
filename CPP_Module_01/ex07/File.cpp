#include "File.hpp"

File::File(const std::string& path, const std::string& from, const std::string& to) : \
												_path(path), _from(from), _to(to) {

}

File::~File() {

}

void 	File::fileCreateReplace() {

	std::string upperFilename = this->_path;
	for (size_t i = 0; i < upperFilename.length(); i++) {
		upperFilename[i] = ::toupper(upperFilename[i]);
	}
	this->_replaceFile.open(upperFilename + ".replace", std::ios::trunc);
}

void 	File::fileOpen() {

	this->_srcFile.open(this->_path);
	if (!this->_srcFile.is_open()) {
		std::cerr << "File was not open" << std::endl;
		exit(1);
	}
}

void 	File::fileRead() {

	this->fileOpen();
	this->_buf << this->_srcFile.rdbuf();
}

void 	File::fileReplace() {

	this->fileRead();
	this->fileCreateReplace();
	while (std::getline(this->_buf, this->_lineBuf)) {
		while (true) {
			if (this->_lineBuf.find(this->_from) == std::string::npos) {
				break ;
			}
			this->_lineBuf.replace(this->_lineBuf.find(this->_from), this->_from.length(), this->_to);
		}
		this->_replaceFile << this->_lineBuf << std::endl;
	}
	this->_replaceFile.close();
	this->_srcFile.close();
}
