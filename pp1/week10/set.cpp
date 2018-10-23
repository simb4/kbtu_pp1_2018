#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	/*
		main:
		insert
		erase
		find
	*/

	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	cout << s.size() << "\n"; // 3
	s.insert(1);
	s.insert(4);
	cout << s.size() << "\n"; // 4

	s.erase(2);
	cout << s.size() << "\n"; // 3	

	set<int>::iterator it = s.find(2);
	if (it == s.end()) {
		cout << "No such element (" << 2 << ")\n";
	} else {
		cout << "Yay, found!\n";
	}

	return 0;
}
