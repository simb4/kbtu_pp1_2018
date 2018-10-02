#include <iostream>

using namespace std;


int main() {

	string s = "abcdefgh"; 

	cout << "substring from 4 till end is" << s.substr(4) << endl;
	cout << "substring from 4 only 3 chars " << s.substr(4, 3) << endl;


	string a = string("abacaba");
	cout << "constr 1: " << a << "\n";

	char c[] = {'a', 'c', 'b'};
	a = string(c);
	cout << "constr 2: " << a << "\n";

	a = string("abacaba", 3, 2);
	cout << "constr 3: " << a << "\n";


	return 0;
}