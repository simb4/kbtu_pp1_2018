#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v(10);
    fill(v.begin(), v.begin()+5, 1);
    fill(v.begin()+5, v.end(), 2);
    for (int x : v) {
        cout << x << ' ';
    } cout << endl;

    int newSize = unique(v.begin(), v.end()) - v.begin();
    v.resize(newSize);
    
    for (int x : v) cout << x << ' ';
    cout << endl;

    return 0;
}
