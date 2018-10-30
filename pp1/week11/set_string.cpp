#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {

	/*
		This order of strings called
		lexigraphical order. This order can
		be found in dictionaries.
	*/

	string a, b;
	cin >> a >> b;
	if (a < b) printf("%s < %s", a.c_str(), b.c_str());
	if (a > b) printf("%s > %s", a.c_str(), b.c_str());
	if (a == b) printf("%s == %s", a.c_str(), b.c_str());
	puts("");

	// return 0;

	set <string> s;
	s.insert("ab");
	s.insert("aba");
	s.insert("b");
	s.insert("kbtu");
	s.insert("aplus");
	s.insert("cplusplus");

	cout << "our dictionary:\n";
	for (string x : s) cout << x << "\n";
	

	return 0;
}
