#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v({ 1,3,3,3,2,2,4,4,4,4 });
    // [1,3,3,3,2,2,4,4,4,4] --> [1,3,2,4 | trash]
    //                                   ^ returns iterator to 4
    vector<int>::iterator it = unique(v.begin(), v.end());
    for (int x : v) cout << x << ' ';
    cout << endl;

    int newSize = it - v.begin();
    cout << "New size: " << newSize << "\n";
    v.resize(newSize);
    for (int x : v) cout << x << ' ';
    cout << endl;

    /*
        int newSize = unique(v.begin(), v.end()) - v.begin();
        v.resize(newSize);
    */    


    return 0;
}
