#include <iostream>

using namespace std;

int n;
// int a[100000];
// indexes of our array
// [0,1,2,...,99999]
int a[100005];

// indexes from statement 1,2,3,...,10^5


int main() {
	/*
		n, a[n]
		(?) sum of elements if index
		is divisible by 7

		n <= 10^5
		0 <= a[i] <= 10^9
		i = 1,2,3,...,n
	*/

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 7 == 0) {
			sum += a[i];
		}
	}

	cout << sum << "\n";

	return 0;
}
