#include <iostream>

using namespace std;


int main() {
    /*
        rgb(0->255,0,0)
        0,1,2,3,4,..,9,A,B,C,D,E,F
        #ffffff


    */

    int b[] = {1,2,3,4};
    int *c = b + 4;
    /*
        b[4] <---> *(b + 4)

    */
    /*
        objective is to show that b[4], *(b+4) and *c are the same
    */
    cout << b[4] << ' ' << *(b + 4) << "\n";
    cout << "c points to value " << *c << "\n";


    return 0;
}



