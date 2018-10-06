#include <iostream>

using namespace std;


string toUpper(string s) {
	// string t = s; - let's replace it with constructor
	string t(s);
	// string s('c'); - example of constructor

	for (int i = 0; i < t.length(); i++) {
		if ('a' <= t[i] && t[i] <= 'z') { 
			int dictOrder = t[i] - 'a';
			t[i] = 'A' + dictOrder;
			// t[i] = t[i] - 'a' + 'A';
		}
	}

	return t;
}


int main() {
	// how to detect ascii code of char
	// cout << (int)'a' << ' ' << (int)'z' << "\n";
	// return 0;

	string s;
	cin >> s;
	cout << toUpper(s) << "\n";

	cout << s.substr(0, s.length()/2) << "\n";


	return 0;
}
