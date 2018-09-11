#include <iostream>

using namespace std;

int n;

int main() {

    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 10 == 7) {
            ans++;
        }
    }

    cout << ans << "\n";


    return 0;
}
