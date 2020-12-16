#ifndef LOGGER_CLASS_HPP
#define LOGGER_CLASS_HPP
#include <iostream>
#include <fstream>

class Logger {

public:
	Logger(std::string name);
	~Logger();
	void log(std::string const & dest, std::string const & message);

private:
	std::string	_fileName;
	void logToConsole(std::string const &message);
	void logToFile(std::string const &message);
	std::string makeLogEntry(std::string const &message);

};

#endif
