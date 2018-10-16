#include <iostream>

using namespace std;


void tellTheStory(int n) {
	// reccursion condition of exit
	if (n == 0) {
		return;
	}
	cout << endl;
	cout << '(' << n << ')' << "Aspandiyar opened the quiz, and saw the problem: \"";
	tellTheStory(n-1);
	cout << "\"";
}


int main () {
	int n;
	cin >> n;
	tellTheStory(n);
}