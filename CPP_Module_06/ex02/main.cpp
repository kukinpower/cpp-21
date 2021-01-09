#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {

	int num = rand() % 3;

	if (num == 1)
		return new A;
	if (num == 2)
		return new B;
	return new C;
}

void identify_from_pointer(Base * p) {
	// if bad pointer cast 0 returns
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a != nullptr) {
		std::cout << "A" << std::endl;
	} else if (b != nullptr) {
		std::cout << "B" << std::endl;
	} else if (c != nullptr) {
		std::cout << "C" << std::endl;
	}
}

void identify_from_reference( Base & p) {
	// exception std::bad_cast thrown only when cast references
	try {
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::exception &ex) {}
	try {
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	} catch (std::exception &ex) {}
	try {
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	} catch (std::exception &ex) {}
}

int		main(void) {
	srand(time(0));
	Base *obj;

	obj = generate();
	identify_from_pointer(obj);
	identify_from_reference(*obj);
	delete obj;
//	for (int i = 0; i < 100; i++) {
//		obj = generate();
//		identify_from_pointer(obj);
//		identify_from_reference(*obj);
//		delete obj;
//	}
	return 0;
}
