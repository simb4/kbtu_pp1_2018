#include <iostream>

using namespace std;


int main() {

    int a[3][4] = {
        {11,12,13,14}, // 0
        {21,22,23,24}, // 1, c - array
        {31,32,33,34}  // 2
    };


    int b[] = {1,2,3,4};
    // b[1] same as *(b + 1)
    // b - pointer on the zero-index element of an array
    // cout << *b << *(b + 1) << "\n";

    // for 2-d array
    // cout << a[1][3] << "\n";
    // cout << *(*(a + 1) + 3) << "\n";

    int *c = a[1] + 2;
    cout << a[1][2] << "\n";
    cout << *c << "\n";


    return 0;
}

