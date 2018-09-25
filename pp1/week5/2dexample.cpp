#include <iostream>

using namespace std;

int n, m, a[100][100];

int main() {
/*
    int a[3][4] = {
        {11,12,13,14}, // 0
        {21,22,23,24}, // 1, c - array
        {31,32,33,34}  // 2
    };
*/
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mx < a[i][j])
                mx = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == mx) {
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }


    return 0;
}

