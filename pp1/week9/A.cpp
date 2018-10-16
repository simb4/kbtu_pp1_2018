#include <iostream>

using namespace std;


bool isPossible(int n) {
	if (n < 1) return false;
	if (n == 1) return true;

	return isPossible(n - 3) or isPossible(n - 5);
}

bool isPossibleAnswer(int n) {
	if (n < 1) return false;
	if (n == 1) {
		cout << "1";
		return true;
	}
	if (isPossibleAnswer(n - 3)) {
		cout << " + 3";
		return true;
	}
	if (isPossibleAnswer(n - 5)) {
		cout << " + 5";
		return true;
	}
	return false;
}


int main () {
	int n;
	cin >> n;
	if (isPossible(n)) {
		puts("YES"); // cout << "YES" << endl;
		// isPossibleAnswer(n);
		// cout << endl;
	}
	else
		puts("NO");

}