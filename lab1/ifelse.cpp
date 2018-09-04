#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    if (a % 1000 == 0) {
        cout << "IMBA\n";
        return 0;
    }
    
    if (a % 2 == 0) {
        if (a % 4 == 0) {
            cout << "super even\n";
            return 0;
        }
        else {
            cout << "just even ";
        }

    }
    else {
        cout << "odd ";
    }
    cout << "number\n";

    return 0;
}
