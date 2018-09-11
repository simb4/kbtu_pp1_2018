#include <iostream>

using namespace std;

int n;

int main() {

    /*
        variables are defined within certain scope
        you can redefine the variable in a new scope,
        this variable will not be seen from outside of this scope
    */

    int x = 5;
    if ( x == 5 ) {
        int x = 1000;
        cout << "in if x = " << x << "\n";
    }
    cout << "outside of if x = " << x << "\n";


    int y = 100;
    for (int y = 5; y < 10; y++) {
        cout << "inside for y=" << y << "\n";
    }
    cout << "outside for y=" << y << "\n";


    return 0;
}
