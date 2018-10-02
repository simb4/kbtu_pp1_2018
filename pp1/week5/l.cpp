#include <iostream>

using namespace std;

int a[500][500], mn[500];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int j = 1; j <= m; j++) {
		mn[j] = 1; // index of row with minimal element
		// int row = 1;
		for (int i = 1; i <= n; i++) {
			if (a[i][j] < a[mn[j]][j]) {
				// row = i
				mn[j] = i;
			}
		}
		// sum += a[row][j]
	}
	cout << "coordinates of min elements:" << endl;
	for (int j = 1; j <= m; j++) {
		cout << mn[j] << ';' << j << endl;
	}
	cout << endl;
	cout << "Their sum:" << endl;
	int sum = 0;
	for (int j = 1; j <= m; j++) {
		sum += a[mn[j]][j];
	}
	cout << sum << endl;
	

	return 0;
}