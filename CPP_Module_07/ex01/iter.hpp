#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void 	iter(const T *arr, uint32_t len, void (*f)(const T &param)) {
	for (uint32_t i = 0; i < len; i++) {
		f(arr[i]);
	}
}

#endif