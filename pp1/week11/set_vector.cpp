#include <iostream>
#include <set>
#include <vector>
using namespace std;

void fill(vector<int> &v, int l, int r) {
	cout << v.size() << " ---> ";
	for (int i = l; i <= r; i++) {
		v.push_back(i);
	}
	cout << v.size() << ": [" << l << ' ' << r << "]\n";
}

void out(vector<int> v) {
	cout << "{ ";
	for (int x : v) {
		cout << x << ' ';
	}
	cout << "}\n";
}

int main() {


	set< vector<int> > s;

	vector<int> v1, v2, v3;
	fill(v1, 1, 5); 
	fill(v2, 3, 6);
	fill(v3, 1, 4);
	
	out(v1);
	out(v2);
	out(v3);

	s.insert(v1);
	s.insert(v2);
	s.insert(v3);

	cout << "Our set is:\n";
	for (vector<int> v : s) {
		out(v);
	}


	

	// s.insert(v1);



	return 0;
}

