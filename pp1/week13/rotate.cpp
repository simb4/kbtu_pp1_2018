#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v(10);
    fill(v.begin(), v.begin()+3, 1);
    fill(v.begin()+3, v.begin()+6, 2);
    fill(v.begin()+6, v.end(), 3);
    for (int x : v) {
        cout << x << ' ';
    } cout << endl;


    rotate(v.begin(), v.begin() + 4, v.end());

    cout << "rotated: ";    
    for (int x : v) cout << x << ' ';
    cout << endl;

    return 0;
}
