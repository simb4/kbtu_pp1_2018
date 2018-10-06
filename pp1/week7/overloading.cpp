#include <iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}
int add(int a, int b, int c) {
	return a + b + c;
}
int add(int a, char c) {
	return a + c;
}

int add(int x, int *a, int n) {
	for (int i = 0; i < n; i++) {
		x += a[i];
	}
	return x;
}

int main() {

/*
	FROM http://www.cplusplus.com/reference/string/string/resize/
	void resize (size_t n);
	void resize (size_t n, char c);
*/
	string s = "Hello world!";
	s.resize(5);
	cout << s << "\n";
	s.resize(10, 'x');
	cout << s << "\n";


	// OUR EXAMPLES
	cout << add(1, 2) << "\n";
	cout << add(1, 2, 3) << "\n";
	cout << add((int)'a', -'A') << "\n";

	int a[] = {1, 2, 3}, n = 3;
	cout << add(1, a, n) << "\n";


	return 0;
}
