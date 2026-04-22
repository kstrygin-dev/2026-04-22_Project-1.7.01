#include <iostream>


int main()
{

	int a;	
	short b;
	long c;
	long long d;
	float f;
	double e;
	long double g;
	bool h;

	std::cout << "int: " << &a << " " << sizeof (a) << std::endl;
	std::cout << "short: " << &b << " " << sizeof (b) << std::endl;
	std::cout << "long: " << &c << " " << sizeof (c) << std::endl;
	std::cout << "long long: " << &d << " " << sizeof (d) << std::endl;
	std::cout << "float: " << &f << " " << sizeof (f) << std::endl;
	std::cout << "double: " << &e << " " << sizeof (e) << std::endl;
	std::cout << "long double: " << &g << " " << sizeof (g) << std::endl;
	std::cout << "bool: " << &h << " " << sizeof (h) << std::endl;

	return EXIT_SUCCESS;
}
