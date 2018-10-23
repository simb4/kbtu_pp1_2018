#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

/*
	Take a look at
	stack
	deque
	queue
	on your own. They are prety similar
*/


	vector<int> v;
	v.push_back(1); // 1
	v.push_back(7); // 1 7
	v.push_back(3); // 1 7 3
	v.push_back(2); // 1 7 3 2

	v.pop_back(); // 1 7 3 2 --> 1 7 3 - delete the last

	// v.push_front(2); // 2 1 7 3
	// v.pop_front(); // 1 7 3
	// v[0], v[1], v[2] = 1 7 3

	// vector<int>::iterator it = v.begin();
	// each iterator contain
	// the iterator to the next element
	// 
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << ' ' << *it << "\n";
	}
	sort(v.begin(), v.end());
	for (int x : v) {
		cout << x << ' ';
	} cout << endl;

	cout << "Size: " << v.size() << "\n";

	cout << "First element: " << v.front() << endl;
	cout << "Last element: " << v.back() << endl;

	v.resize(1);
	cout << "After resize: " <<v.size() << "\n";	
	v.clear();
	cout << "After clear: " << v.size() << "\n";	



	return 0;
}


