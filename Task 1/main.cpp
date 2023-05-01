#include <cstdio>
#include <iostream>
class Road {
public:
	double Lenght;
	int Width;

};

int main() {

	printf("test v0.1 :OK, ");
	int a = 123;
	Road road;
	road.Lenght = 300.2;
	road.Width = 3;
	std::cout << "a = " << a << std::endl;
	std::cout << "Lenght: " << road.Lenght << std::endl;
	std::cout << "Width: " << road.Width << std::endl;

	return 0;
}

