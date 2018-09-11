#include <iostream>

using namespace std;

int n;

int main() {

    int n;
    cin >> n;
    cout << "For example: ";
    for (int i = 0; i < n; i++) {
        cout << i * i << " ";
        // i++ is done here
    }
    cout << endl;
    /*
        n == 3
        1) i = 0, 0 < n? yes => go cycle (cout << 0)
        2) i++, i = 1, 1 < n? yes => go cycle (cout << 1)
        3) i++, i = 2, 2 < 3? yes => go cycle (cout << 4)
        4) i++, i = 3, 3 < 3? no => finish cycle
    */

    /*
        PROBLEM:
        output all even numbers <= n
    */
    cout << "Even numbers that <= " << n << ":\n";
    for (int i = 0; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    /*
        lets draw chess table:
        #.#.#.#.#.
        .#.#.#.#.#
    */
    cout << "Chess table:\n";
    for (int i = 0; i < 8; i++) {
        cout << i << ": ";
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) cout << '#';
            else cout << '.';
        }
        cout << endl;
    }


    return 0;
}
