#include <iostream>

using namespace std;

const int mod = 10000;

// int pow_edige(int a, int n) {
// 	// return pow_edige(2, 3)
// 	return pow_edige(a, n);
// }

/*
	x = pow_edige(2, 3)
		pow_edige(2, 3)
			pow_edige(2, 3)
				pow_edige(2, 3)
					pow_edige(2, 3)
						pow_edige(2, 3)
*/

// ...
// int x = pow_edige(2, 3);
// ...

// returns a^n
int pow(int a, int n) {
	/*
		this part only needed to show slow
		implementation of pow func.
	*/
	// int res = 1;
	// for (int i  = 1; i <= n; i++) {
	// 	res = res * a % mod;
	// }
	// // cout << res << "\n";
	// return res;


	if (n == 0) return 1;
	// a^n = a^(n-1) * a
	return pow(a, n-1) * a % mod;
}
/*
	how many levels of reccursion?
	pow(a, n)
		pow(a, n-1)
			pow(a, n-2)
				...
					pow(a, 0)
	n steps of reccursion
	what if n is quite large? Like 10^9
	Assuming that 10^8 op ~ 1 sec =>
	=> 10 seconds to calculate power of a.
*/


/*
	a^2n = a^n * a^n

	~ log(10^9) operations

	in general  ~log_2(n) operations

*/

int fast_pow(int a, int n) {
	if (n == 0) return 1;
	if (n == 1) return a;
	if (n % 2 == 0) {
		int x = fast_pow(a, n / 2);
		return x * x % mod;
	}
	else {
		return fast_pow(a, n - 1) * a % mod;
	}
}


int main() {

	int a, n;
	// find a^n

	cin >> a >> n;

	cout << fast_pow(a, n) << "\n";
	cout << pow(a, n) << "\n";



	return 0;
}