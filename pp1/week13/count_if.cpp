#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gen() { // random number from [1, 1000]
    return 1 + rand() % 1000;
}

bool isOdd(int x) {
	return x % 2 == 1;
}

int main() {

    srand(time(NULL));

    int expNum = 100000;

    double ans = 0;
    for (int i = 1; i <= expNum; i++) {
	    vector<int> v(10);
	    generate(v.begin(), v.end(), gen);

	    int oddNum = count_if(v.begin(), v.end(), isOdd);

	    ans += oddNum;
    }
    ans /= expNum;

    printf("Expected number of odd numbers: %.3f\n", ans);



    return 0;
}
