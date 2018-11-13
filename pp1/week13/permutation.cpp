#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    // permutation of size n - permutation(shuffle)
    // of numbers 1,2,...,n

    int a[4] = {1, 2, 3, 4};
    do {
        for (int i = 0; i < 4; i++) cout << a[i] << ' ';
        cout << endl;
    } while(next_permutation(a, a + 4));


    
    cout << "==============\n";
    int m = 6;
    int b[m] = {1, 6, 2, 5, 4, 3};
    for (int i = 0; i < m; i++) cout << b[i] << ' '; cout << endl;
    next_permutation(b, b + 6);
    for (int i = 0; i < m; i++) cout << b[i] << ' '; cout << endl;
    next_permutation(b, b + 6);
    for (int i = 0; i < m; i++) cout << b[i] << ' '; cout << endl;
    next_permutation(b, b + 6);
    for (int i = 0; i < m; i++) cout << b[i] << ' '; cout << endl;

    return 0;
}
