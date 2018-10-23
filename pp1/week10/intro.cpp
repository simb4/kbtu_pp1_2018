#include <iostream>
#include <algorithm>
// sort
// lower_bound
// upper_bound
// unique

#include <cmath>
// sqrt
// cos, sin
// pow

#include <vector>
// class vector<T>
// 




using namespace std;

int main() {


	int a[] = {1, 7, 3, 2};
	sort(a, a + 4); // a + [0, 4)
	// 1 2 3 7
	for (int i = 0; i < 4; i++) {
		cout << a[i] << ' ';
	} cout << endl;

	vector<int> vect({ 1, 7, 3, 2 });

	sort(vect.begin(), vect.end());

	for (int i = 0; i < 4; i++)
		cout << vect[i] << " ";
	cout << endl;


	return 0;
}

