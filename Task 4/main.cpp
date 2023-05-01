#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class TBook {
public:
	string name;
	string author;
	string count;
};

int main() {
	cout << "Test v1.4: Ok.\n";

	TBook book;

	book.name = "Application programming";
	book.author = "Kirill Aleksandrovich Kasatkin";
	book.count = "30000";

	cout << "\nFirst book: \n";
	cout << "Name: " << book.name << endl;
	cout << "Author: " << book.author << endl;
	cout << "Count: " << book.count << endl;

	return 0;
}
