#include <cstdio>
#include <iostream>
class Road {
public:
	double Lenght;
	int Width;
};

int main() {

	Road road;
	std::cin >> road.Lenght;
	std::cin >> road.Width;

	std::cout << "Lenght: " << road.Lenght << std::endl;
	std::cout << "Width: " << road.Width << std::endl;

	return 0;
}
