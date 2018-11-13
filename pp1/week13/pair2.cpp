#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {

    /*
        problem: given n student names and points for quiz
        question: sot them in descending order of points
        then by acending order of names
    */

    int n;
    cin >> n;
    pair<string,int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cmp);
    cout << "==========\n";
    for (int i = 0; i < n; i++) {
        cout << a[i].first << ' ' << a[i].second << "\n";
    }
    sort(a, a + n);
    cout << "==========\n";
    for (int i = 0; i < n; i++) {
        cout << a[i].first << ' ' << a[i].second << "\n";
    }


    return 0;
}
