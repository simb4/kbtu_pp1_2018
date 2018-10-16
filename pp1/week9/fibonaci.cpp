#include <iostream>

using namespace std;

/*
	f(5)
		f(4) + f(3)
			f(3) + f(2)
				f(2) + f(1)
					f(1) + f(0) - moment we should stop
					1 + 1 = 2
				2 + f(1)
				2 + 1 = 3 <- f(3)
			3 + f(2)
				f(1) + f(0) = 1 + 1 = 2
			3 + 2 = 5
		5 + f(3)
			f(2) + f(1)
				f(1) + f(0) = 1 + 1 = 2
			2 + f(1)
			2 + 1 = 3
		5 + 3 = 8
	f(5) = 8

			
*/

/*
	fibonacci nubers:
	f[n] = f[n-1] + f[n-2], n >= 2
	f[0] = 1
	f[1] = 1
				  n-2 n-1  n
	1, 1, 2, 3, 5, 8, 13, 21...

*/

int tabs = 0;

void out(int n) {
	cout << "fib(" << n << ")";
}

int fibonacci(int n) {
	/*
		return condition
	*/
	/* main part */
	if (n == 0) return 1;
	if (n == 1) return 1;
	/* main part */


	/* presentation begin */
	int t = tabs;
	while(t--) cout << " ";
	out(n);
	cout << " = ";
	out(n-1);
	cout << " + ";
	out(n-2);
	cout << "\n";

	tabs += 2;
	/* presentation end */

	/* main part */
	int x = fibonacci(n-1);
	int y = fibonacci(n-2);
	/* main part */

	/* presentation line */
	tabs -= 2;

	/* main part */
	return x + y;
	/* main part */
}

int main () {
	int n;
	cin >> n;
	cout << fibonacci(n) << "\n";
	// cout << "fibonacci(" << n << ") = " << fibonacci(n) << "\n";



}