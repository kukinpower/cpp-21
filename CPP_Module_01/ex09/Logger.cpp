#include "Logger.hpp"

typedef void (Logger::*LoggerMemberPtr)(std::string const	&message);

Logger::Logger(std::string name) : _fileName(name) {

}

Logger::~Logger() {

}

void		Logger::logToConsole(std::string const &message) {

	std::cout << this->makeLogEntry(message) << std::endl;
}

void		Logger::logToFile(std::string const &message) {

	std::ofstream	file(this->_fileName, std::ios::app);
	if (!file.is_open()) {
		std::cerr << "File can't be opened" << std::endl;
		exit(1);
	}
	file << this->makeLogEntry(message) << std::endl;
	file.close();
}

std::string	Logger::makeLogEntry(std::string const &message) {

	time_t now = time(nullptr);
	char *date = ctime(& now);
	std::string	d = date;
	d.erase(d.length() - 1);
	return "(" + d + ")> " + message;
}

void		Logger::log(std::string const & dest, std::string const & message) {

	LoggerMemberPtr	lmp[] = { &Logger::logToConsole, &Logger::logToFile };
	std::string const	dst[2] = {"console", "file"};

	for (int i = 0; i < 2; i++) {
		if (dest == dst[i]) {
			(this->*lmp[i])(message);
			return ;
		}
	}
	std::cerr << "No such destination to log" << std::endl;
}
