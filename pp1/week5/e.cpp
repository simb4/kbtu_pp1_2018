#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) { // starting to draw n rows
		// drawing i-th row
		for (int x = 1; x <= i; x++) {
			cout << "[*]";
		}
	
		cout << endl;
	}

	return 0;
}