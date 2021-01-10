#ifndef ARRAY_TPP
#define ARRAY_TPP
#include <iostream>
#include <sstream>

template<typename T>
class Array {

public:
	Array() : _arr(new T[0]), _size(0) {}
	Array(unsigned int n) : _arr(new T[n]()), _size(n) {}
	Array(const Array &copy) : Array() { *this = copy; }
	virtual ~Array() { delete[] _arr; }
	Array &operator=(const Array &copy) {
		if (_arr)
			delete[] _arr;
		_arr = new T[copy._size]();
		_size = copy._size;
		for (int i = 0; i < _size; i++) {
			_arr[i] = copy._arr[i];
		}
		return *this;
	}

	uint32_t size() const { return _size; }

	T	&operator[](uint32_t idx) {
		if (idx < 0 || idx >= _size) {
			std::stringstream ss;
			ss << "idx: " << idx << " is out of range" << std::endl;
			throw std::out_of_range(ss.str());
		}
		return _arr[idx];
	}

private:
	T			*_arr;
	uint32_t	_size;

};

#endif
