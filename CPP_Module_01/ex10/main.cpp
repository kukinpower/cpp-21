#include "File.hpp"
#include "Cat.hpp"

int		main(int ac, char const *av[]) {
	if (ac == 1) {
		Cat		reader;
		reader.readFromStdin();
	} else {
		for (int i = 1; i < ac; i++) {
			File	file(av[i]);
			file.fileRead();
		}
	}

	return 0;
}
