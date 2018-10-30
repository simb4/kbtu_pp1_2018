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
	// set<int> s;
	// s.insert(13);
	// s.insert(14);
	// s.insert(15);
	// s.insert(11);
	// s.insert(12);

	// same as below
	int ints[] = {13, 14, 15, 11, 12};
	set <int> s(ints, ints + 5);

	s.erase(13);

	// won't work
	// s.erase(s.end() - 1);

	// won't also work, Anna
	s.erase(s.size() - 1);

	for (int x : s) {
		cout << x << " ";
	}
	cout << endl;


	return 0;
}
