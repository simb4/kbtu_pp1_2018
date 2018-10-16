#include <iostream>

using namespace std;

int n;
int a[100];


/*
	input: array a, size of array n
	a[0], a[1], a[2], ..., a[n-1]

	what function does:
	outputs an array in reverse order
*/

/*
	out_reverse(n)
		cout << a[n-1]
		out_reverse(n-1)
			cout << a[n-2]
			out_reverse(n-2)
				cout << a[n-3]
				out_reverse(n-3)
				...
					out_reverse(1)
						out_reverse(0)
						return
					return
				return
				...
			return
		return
	return

*/


void out_reverse(int a[], int n) {
	if (n == 0) {
		return;
	}

	cout << a[n-1] << " ";
	out_reverse(a, n - 1);

	return;
}

int main () {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	out_reverse(a, n);


	return 0;
}
