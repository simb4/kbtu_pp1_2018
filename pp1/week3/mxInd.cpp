#include <iostream>

using namespace std;


int main() {

/*
    array - ordered list of objects (for example integers)
*/

/*
    Problem:
    Given array of n elements,
    find index of maximum element in an array,
    if there are several answers output leftmost
    Ex:
    5
    1 2 3 5 4  => 3
    6
    1 2 3 2 3 2 => 2
*/

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mxIndex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[mxIndex]) {
            mxIndex = i;
        }
    }
    cout << mxIndex << "\n";

    /*  solution:
        5
        1 2 3 5 4  => 3
        mxIndex = 0
        i=0
        .....
        i=1
        if (2 >= 1) mxIndex := 1
        i=2
        if (3 >= 2) mxIndex := 2
        i=3
        if (5 >= 3) mxIndex := 3
        i=4
        if (4 >= 5) false, nothing happened
    */


    return 0;
}
