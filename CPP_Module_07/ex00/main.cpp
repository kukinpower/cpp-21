#include "whatever.hpp"

class
Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

	const int &getN() const {
		return _n;
	}
private:
	int _n;
};

std::ostream &operator<<(std::ostream &out, const Awesome &obj) {
	out << obj.getN();
	return out;
}

int		main(void) {

	int a = 1, b = 2;
	float af = 1.1, bf = 2.1;
	char ac = 65, bc = 66;
	Awesome awesome1(5), awesome2(7);

	std::cout << "----------- Test Swap -----------" << std::endl;
	std::cout << "int a: " << a << ", int b: " << b << std::endl;
	swap(a, b);
	std::cout << "int a after swap: " << a << ", int b after swap: " << b << std::endl << std::endl;
	std::cout << "float af: " << af << ", float bf: " << bf << std::endl;
	swap(af, bf);
	std::cout << "float af after swap: " << af << ", float bf after swap: " << bf << std::endl << std::endl;
	std::cout << "char ac: " << ac << ", char bc: " << bc << std::endl;
	swap(ac, bc);
	std::cout << "char ac after swap: " << ac << ", char bc after swap: " << bc << std::endl << std::endl;
	std::cout << "Awesome awesome1: " << awesome1 << ", Awesome awesome2: " << awesome2 << std::endl;
	swap(awesome1, awesome2);
	std::cout << "Awesome awesome1 after swap: " << awesome1 << ", Awesome awesome2 after swap: " << awesome2 << std::endl << std::endl;

	std::cout << "----------- Test Min -----------" << std::endl;
	std::cout << "int a: " << a << ", int b: " << b << ", min: " << min(a, b) << std::endl << std::endl;
	std::cout << "float af: " << af << ", float bf: " << bf << ", min: " << 	min(af, bf) << std::endl << std::endl;
	std::cout << "char ac: " << ac << ", char bc: " << bc << ", min: " << min(ac, bc) << std::endl << std::endl;
	std::cout << "Awesome awesome1: " << awesome1 << ", Awesome awesome2: " << awesome2 << ", min: " << min(awesome1, awesome2) << std::endl << std::endl;

	std::cout << "----------- Test Max -----------" << std::endl;
	std::cout << "int a: " << a << ", int b: " << b << ", max: " << max(a, b) << std::endl << std::endl;
	std::cout << "float af: " << af << ", float bf: " << bf << ", max: " << 	max(af, bf) << std::endl << std::endl;
	std::cout << "char ac: " << ac << ", char bc: " << bc << ", max: " << max(ac, bc) << std::endl << std::endl;
	std::cout << "Awesome awesome1: " << awesome1 << ", Awesome awesome2: " << awesome2 << ", max: " << max(awesome1, awesome2) << std::endl << std::endl;
	return 0;
}
