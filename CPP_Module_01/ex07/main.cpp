#include "File.hpp"

int		main(int ac, char const *av[]) {
	if (ac != 4) {
		std::cerr << "Bad args" << std::endl;
		return 1;
	}
	else if (!strlen(av[1]) || !strlen(av[2]) || !strlen(av[3])) {
		std::cerr << "Empty args" << std::endl;
		return 1;
	}
	File	file(av[1], av[2], av[3]);
	file.fileReplace().fileOpen();


	return 0;
}
