#include <iostream>

using namespace std;

// GLOBAL SCOPE
int y = 10;

void outY() {
	cout << "in function before desclarion " << y << "\n";

	// FUNCTION SCOPE
	int y = 15;

	if (y == 15) {
		// IF SCOPE
		int y = 42;
		cout << "in IF statement inside of function " << y << "\n";
	}
	cout << "in the end of function " << y << "\n";
}

int main() {

	cout << "in main function " << y << "\n";
	outY();


	return 0;
}
