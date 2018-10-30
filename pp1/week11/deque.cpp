#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
/*
	FIFO - first in, first out
*/

	deque<int> d;

	d.push_front(1);
	d.push_back(2);
	d.push_front(3);
	d.push_back(4);
	d.push_front(5);
	d.push_back(6);

	cout << "deque: ";
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << "\n";



	return 0;
}
