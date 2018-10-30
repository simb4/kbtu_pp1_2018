#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
/*
	FIFO - first in, first out
*/

	queue<int> q;

	q.push(1);
	q.push(4);
	q.push(3);
	q.push(2);

	cout << "first element: ";
	cout << q.front() << "\n";
	cout << "last element: ";
	cout << q.back() << "\n";


	// delete the first one
	q.pop();
	// delete one more
	q.pop();

	cout << "First one after two pops: ";
	cout << q.front() << "\n";

	// queue state: 4 3 2
	while (!q.empty()) q.pop();
	cout << q.size() << " elements after clear\n";


	return 0;
}
