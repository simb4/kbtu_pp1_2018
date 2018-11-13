#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int a[1005];

/*
 function that returns the length of integer
*/
int len(int x) {
    if (x == 0) return 1;
    int res = 0;
    while (x > 0) {
        res++;
        x /= 10;
    }
    return res;
}

bool cmp(int x, int y) {
    // must be true, if x should stay before y
    // of false otherwise
    // default is x < y
    return len(x) < len(y);
}

void readAndSort() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
    }
    // 1, 2, 3, ..., n
    // a+1,a+2, ..., a+n
    sort(a + 1, a + n + 1);

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        // 22:33:14
        // scanf("%d:%d:%d", h, m, s);
        scanf("%d", a + i);
    }
    // 0, 1, 2, 3, ..., n-1
    // [a, a+1, a+2, ..., a+n-1], a+n
    sort(a, a + n);
}

int main() {

    // readAndSort();

    vector<int> v({123, 22, 0, 1, 24, 666666, 333, 4444});
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;



    return 0;
}
