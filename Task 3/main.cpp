#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>

class Road {
public:
	double Lenght;
	int Width;
};

int main() {

	Road road;
	std::ifstream fIn;

	fIn.open("C:\\33\\Kropachev\\01\\prog01-2\\Debug\\RoadLenghtInput.txt");
	fIn >> road.Lenght;
	fIn.close();

	fIn.open("C:\\33\\Kropachev\\01\\prog01-2\\Debug\\RoadWidthInput.txt");
	fIn >> road.Width;
	fIn.close();

	std::cout << "Lenght: " << road.Lenght << std::endl;
	std::cout << "Width: " << road.Width << std::endl;

	return 0;
}
