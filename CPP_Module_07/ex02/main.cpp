#include "Array.tpp"

int		main(void) {

	Array<int>	intArrEmpty;
	Array<int>	intArrSize(10);
	Array<char>	charArrSize(5);

	try {
		std::cout << "int empty array size: " << intArrEmpty.size() << std::endl;
		std::cout << "int empty array [0]: " << intArrEmpty[0] << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		std::cout << "int array size: " << intArrSize.size() << std::endl;
		std::cout << "int array [0]: " << intArrSize[0] << std::endl;
		intArrSize[0] = 5;
		std::cout << "int array [0] after changing value: " << intArrSize[0] << std::endl;
		std::cout << "int array [10]: " << intArrSize[10] << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		std::cout << "char array size: " << charArrSize.size() << std::endl;
		for (uint32_t i = 0; i < charArrSize.size(); i++) {
			charArrSize[i] = 65 + i;
		}
		std::cout << "char array after changing values: ";
		for (uint32_t i = 0; i < charArrSize.size(); i++) {
			std::cout << charArrSize[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "char array [11]: " << charArrSize[10] << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
