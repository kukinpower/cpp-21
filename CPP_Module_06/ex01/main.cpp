#include "Data.hpp"

void * serialize(void) {

	static const char alphanum[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";

	char *randomData = new char[SIZEOF_CHAR_SEQ * 2 + sizeof(int)];
	std::cout << SIZEOF_CHAR_SEQ * 2 + sizeof(int) << std::endl;

	for (uint32_t i = 0; i < SIZEOF_CHAR_SEQ; ++i) {
		randomData[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
		std::cout << randomData[i];
	}

	int *num = new int;
	*num = rand();

	std::cout << std::endl << *num << std::endl;

	char *reNum = reinterpret_cast<char *>(num);
	for (uint32_t i = 0; i < SIZEOF_INT; i++) {
		randomData[SIZEOF_CHAR_SEQ + i] = reNum[i];
	}
	for (uint32_t i = 0; i < SIZEOF_CHAR_SEQ; i++) {
		randomData[SIZEOF_CHAR_SEQ + SIZEOF_INT + i] = alphanum[rand() % (sizeof(alphanum) - 1)];
		std::cout << randomData[SIZEOF_CHAR_SEQ + SIZEOF_INT + i];
	}
	std::cout << std::endl;
	void *raw = reinterpret_cast<void *>(randomData);

	delete num;

	return raw;
}

Data * deserialize(void * raw) {
	char	*rawData = reinterpret_cast<char *>(raw);
	Data	*newData = new Data;
	char	*tmpStr = new char[SIZEOF_CHAR_SEQ + 1];
	char	*tmpInt = new char[SIZEOF_INT + 1];
	int		*tmpIntPtr;

	for (uint32_t i = 0; i < SIZEOF_CHAR_SEQ; i++) {
		tmpStr[i] = rawData[i];
	}
	tmpStr[SIZEOF_CHAR_SEQ] = '\0';
	newData->s1.assign(tmpStr, tmpStr + SIZEOF_CHAR_SEQ);

	for (uint32_t i = 0; i < SIZEOF_INT; i++) {
		tmpInt[i] = rawData[i + SIZEOF_CHAR_SEQ];
	}
	tmpInt[SIZEOF_INT] = '\0';
	tmpIntPtr = reinterpret_cast<int *>(tmpInt);
	newData->n = *tmpIntPtr;

	for (uint32_t i = 0; i < SIZEOF_CHAR_SEQ; i++) {
		tmpStr[i] = rawData[i + SIZEOF_CHAR_SEQ + SIZEOF_INT];
	}
	newData->s2.assign(tmpStr, tmpStr + SIZEOF_CHAR_SEQ);

	delete[] tmpStr;
	delete[] tmpInt;

	return newData;
}

int 	main() {
	srand(time(0));

	std::cout << "Serialize: " << std::endl;
	void	*raw = serialize();
	std::cout << "Raw data size: " << sizeof(raw) << std::endl;
	Data	*data = deserialize(raw);

	std::cout << std::endl << "Deserialize: " << std::endl;
	std::cout << data->s1 << std::endl << data->n << std::endl << data->s2 << std::endl;

	delete data;
	delete[] reinterpret_cast<char *>(raw);

	return 0;
}