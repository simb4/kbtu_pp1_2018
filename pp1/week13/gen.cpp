#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gen() { // random number from [1, 1000]
    return 1 + rand() % 1000;
}

int main() {

    srand(time(NULL));


    vector<int> v(10);
    generate(v.begin(), v.end(), gen);

    for (int x : v) cout << x << " ";
    cout << "\n";

    return 0;
}
