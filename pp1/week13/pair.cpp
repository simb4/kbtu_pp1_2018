#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main() {

    /*
        problem:
        given n points on plane
        question:
        out them in ascending otder of x-coordinate,
        if x-coordinates are equal then in descending
        order of y-coordinate

        Sample:
        input:
        5
        2 4
        3 1
        1 2
        1 3
        2 1

        output:
        1 3
        1 2
        2 4
        2 1
        3 1

    */

    int n;
    cin >> n;

    pair<int,int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cmp);
    cout << "==========\n";
    for (int i = 0; i < n; i++) {
        cout << a[i].first << ' ' << a[i].second << "\n";
    }


    return 0;
}
