#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    for (int i = 31; i >= 0; i--) {
        if ((n & (1 << i)) > 0)
            cout << '1';
        else
            cout << '0';
    }
    cout << endl;
    while (n > 0) {
        cout << (n & 1);
        n /= 2;
    }
    cout << endl;
    /*            v
               9876543210
        0000...0111001010
        00000000001000000
        00000000001000000
    /*            v
               9876543210
        0000...0110001010
        00000000001000000
        00000000000000000

        n=10
        i=0 -> i < 10? yes
        cout << 0 << "\n";
        ---
        i++ <=> i = i + 1 =>
        => i=1 --> i < 10? yes
        ...
        ...
        ...
        i++ => i=10 -> 10 < 10? no
        => break;
    */


    return 0;
}
