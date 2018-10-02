#include <iostream>
#include <typeinfo>

using namespace std;


int main() {
	// int a[] = {1, 2, 3};
	// a[0] = 1
	// a[1] = 2
	// a[2] = 3
	// 0 <= i < 3
	
			//  b      end
	string s = "abacabx";

	cout << "s.begin() = " << *s.begin() << endl;
	cout << "s.begin()+1 = " << *(s.begin()+1) << endl;
	cout << "s.end()-1 = " << *(s.end()-1) << endl;
	cout << "length = " << s.end() - s.begin() << endl;
	cout << "length = " << s.begin() - s.end() << endl;

	cout << "length of string = " << s.size() << ' ' << s.length() << "\n";


	return 0;
}