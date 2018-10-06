#include <iostream>

using namespace std;

int add(int x, int b) {
	return x + b;
}

int pow(int x, int pw) {
	int res = 1;
	for (int i = 1; i <= pw; i++) {
		res = res * x;
		// res *= x;
	}
	return res;
}

int main() {

	int a, b;
	cin >> a >> b;
	cout << add(a, b) << "\n";
	cout << pow(a, b) << "\n";


	return 0;
}
