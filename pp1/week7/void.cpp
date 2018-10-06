#include <iostream>

using namespace std;

int a[1000], n;

void reverseA() {
	for (int i = 0; i < n/2; i++) {
		swap(a[i], a[n-1-i]);
		// a[0] <-> a[n-1]
		// a[1] <-> a[n-2]
		// ...
		// a[n/2] <-> a[(n+1)/2]
	}
}

void reverse(int *a, int n) {
	for (int i = 0; i < n/2; i++) {
		swap(a[i], a[n-1-i]);
	}
}

void outArray(int *a, int n) {
	cout << '[';
	for (int i = 0; i < n; i++)
		cout << a[i] << " ]"[i == n-1];
	cout << endl;
}


int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// reverseA();
	reverse(a, n);
	outArray(a, n);

	reverse(a + n/2, n/2);
	outArray(a, n);

	return 0;
}
