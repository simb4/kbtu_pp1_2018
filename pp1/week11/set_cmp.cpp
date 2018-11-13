#include <iostream>
#include <set>
#include <vector>
using namespace std;

// struct point {
// 	int x, y;

// 	bool const operator <( const point &p ) const {
// 		return x < p.x;
// 	}
// };

struct string_cmp {
	bool operator() (const string& lhs, const string rhs ) const {// <
		return lhs.length() > rhs.length();
	}
};


int main() {
	/*
		let write our own comparator
		for strings
	*/

	// example of built in comparators
	// point p, q;
	// p.x = 1;
	// p.y = 2;
	// q.x = 2;
	// q.y = 5;
	// set<point> s;
	// if (p < q) {
	// 	puts("p less than q");
	// }

	set<string, string_cmp> s;
	s.insert("kbtu");
	s.insert("fit");
	s.insert("Aaa");
	s.insert("Bb");


	/*
		a = "fit"
		b = "Aaa"
		!(a < b) => (a >= b)
		!(b > a) => (b >= a)
		=> (a == b)
	*/

	cout << "Dict sorted with comparator:\n";
	for (string str : s) cout << str << "\n";


	return 0;
}

