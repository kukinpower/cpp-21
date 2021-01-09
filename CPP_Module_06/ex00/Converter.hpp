#ifndef CONVERTER_CLASS_HPP
#define CONVERTER_CLASS_HPP
#include <iostream>
#include <math.h>

class Converter {

public:
	Converter();
	virtual ~Converter();

	void 		printAllRepresentations(const std::string &str);

	class NonDisplayableException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

	class ImpossibleConversionException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

	class EmptyStringConversionException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

	class BadArgumentException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

private:
	Converter(const Converter &copy);
	Converter &operator=(const Converter &copy);

	bool 		isImpossibleForCharOrInt(const std::string &str);
	bool 		isBadArg(const std::string &str);

	int 		convertToInt(const std::string &str);
	char 		convertToChar(const std::string &str);
	double 		convertToDouble(const std::string &str);
	float 		convertToFloat(const std::string &str);

};

#endif
