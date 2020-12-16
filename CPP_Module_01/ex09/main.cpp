#include "Logger.hpp"

int		main(void) {
	Logger	logger("logs.txt");

	logger.log("console", "Console log message");
	logger.log("console", "Another console log message");
	logger.log("file", "File log message");
	logger.log("file", "Another file log message");
	logger.log("disk", "Disk log message");
	return 0;
}
