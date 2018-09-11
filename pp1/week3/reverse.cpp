#include <iostream>

using namespace std;


int main() {

/*
    array - ordered list of objects (for example integers)

    Problem: read n, and n elements of an array, and output them in reverse order
*/

/*
    INCCORECT EXAMPLE:
    int n;
    int a[n];
    cin >> n;
*/

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n-1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl; // end of line


    return 0;
}
