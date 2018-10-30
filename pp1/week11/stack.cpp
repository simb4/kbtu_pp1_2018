#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
/*
	LIFO - last in, first out
*/

	stack<int> st;
	st.push(1); // 1
	st.push(4); // 1 4
	st.push(3); // 1 4 3
	st.push(2); // 1 4 3 2

	cout << st.top() << "\n"; // view top element
	st.pop(); // pop last element

	// current stack: 1 4 3
	cout << st.top() << "\n";

	cout << "stack size: " << st.size() << "\n";

	while (!st.empty()) st.pop();

	cout << "stack size after clear: ";
	cout << st.size() << "\n";


	return 0;
}
