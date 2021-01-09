#include "Converter.hpp"

Converter::Converter() {

}

Converter::~Converter() {

}

Converter::Converter(const Converter &copy) {

	*this = copy;
}

Converter	&Converter::operator=(const Converter &copy) {

	(void)copy;
	return *this;
}

bool 		Converter::isImpossibleForCharOrInt(const std::string &str) {

	return str == "nan" || str == "nanf" || str == "inf" || str == "inff" || \
			str == "-inf" || str == "-inff" || str == "+inf" || str == "+inff";
}

int 		Converter::convertToInt(const std::string &str) {

	if (isImpossibleForCharOrInt(str)) {
		throw Converter::ImpossibleConversionException();
	}

	int res;

	if (str.length() == 1 && !std::isdigit(str[0])) {
		char c = str[0];
		unsigned char uc = static_cast<unsigned char>(c);
		res = static_cast<int>(uc);
	} else {
		res = std::stoi(str);
	}
	return res;
}

char 		Converter::convertToChar(const std::string &str) {

	if (str.length() == 1 && !std::isdigit(str[0])) {
		return str[0];
	} else if (isImpossibleForCharOrInt(str)) {
		throw Converter::ImpossibleConversionException();
	}
	if (str.find('.') == std::string::npos) {
		int tmp;
		try {
			tmp = std::stoi(str);
		} catch (std::exception &ex) {
			throw Converter::ImpossibleConversionException();
		}
		if (tmp < -128 || tmp > 127)
			throw Converter::ImpossibleConversionException();
		else if (!std::isprint(tmp)) {
			throw Converter::NonDisplayableException();
		}
		else {
			return static_cast<char>(tmp);
		}
	} else {
		double tmp;
		try {
			tmp = std::stod(str);
		} catch (std::exception &ex) {
			throw Converter::ImpossibleConversionException();
		}
		if (tmp - floor(tmp) != 0) {
			throw Converter::ImpossibleConversionException();
		}
		int tmpInt = std::stoi(str);
		if (tmpInt < -128 || tmpInt > 127)
			throw Converter::ImpossibleConversionException();
		else if (!std::isprint(tmpInt)) {
			throw Converter::NonDisplayableException();
		}
		else {
			return static_cast<char>(tmp);
		}
	}
}

double 		Converter::convertToDouble(const std::string &str) {

	double res;

	if (str.length() == 1 && !std::isdigit(str[0])) {
		char c = str[0];
		unsigned char uc = static_cast<unsigned char>(c);
		res = static_cast<double>(uc);
	} else {
		res = std::stod(str);
	}
	return res;
}

float 		Converter::convertToFloat(const std::string &str) {

	float res;

	if (str.length() == 1 && !std::isdigit(str[0])) {
		char c = str[0];
		unsigned char uc = static_cast<unsigned char>(c);
		res = static_cast<float>(uc);
	} else {
		res = std::stof(str);
	}
	return res;
}

bool 		Converter::isBadArg(const std::string &str) {

	if (isImpossibleForCharOrInt(str)) {
		return false;
	}
	if (str.length() == 1) {
		return false;
	}
	int fFlag = 0;
	int dotFlag = 0;
	for (uint64_t i = 0; i < str.length(); i++) {
		if (str[i] == '.') {
			dotFlag++;
			if (dotFlag > 1)
				return true;
		}
		if (str[i] == 'f') {
			fFlag++;
			if (fFlag > 1)
				return true;
		}
		if (!std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.') {
			return true;
		}
	}
	return false;
}

void 		Converter::printAllRepresentations(const std::string &str) {

	if (str.empty()) {
		throw Converter::EmptyStringConversionException();
	}
	else if (isBadArg(str)) {
		throw Converter::BadArgumentException();
	}

	try {
		char c = convertToChar(str);
		std::cout << "char: '" << c << "'" << std::endl;
	} catch (std::exception &ex) {
		std::cout << "char: " << ex.what() << std::endl;
	}

	try {
		int i = convertToInt(str);
		std::cout << "int: " << i << std::endl;
	} catch (std::exception &ex) {
		std::cout << "int: impossible" << std::endl;
	}

	try {
		float f = convertToFloat(str);
		if (f - floor(f) == 0) {
			std::cout << "float: " << f << ".0f" << std::endl;
		} else {
			std::cout << "float: " << f << "f" << std::endl;
		}
	} catch (std::exception &ex) {
		std::cout << "float: impossible" << std::endl;
	}

	try {
		double d = convertToDouble(str);
		if (d - floor(d) == 0) {
			std::cout << "double: " << d << ".0" << std::endl;
		} else {
			std::cout << "double: " << d << std::endl;
		}
	} catch (std::exception &ex) {
		std::cout << "double: impossible" << std::endl;
	}
}

const char	*Converter::NonDisplayableException::what() const throw() {
	return "Non displayable";
}

const char	*Converter::ImpossibleConversionException::what() const throw() {
	return "impossible";
}

const char	*Converter::EmptyStringConversionException::what() const throw() {
	return "string is empty";
}

const char	*Converter::BadArgumentException::what() const throw() {
	return "bad argument";
}
