#include <iostream>
#include <cmath>
using namespace std;

struct point {
	double x, y;

	void read() {
		cin >> x >> y;
	}

	void out() {
		cout << '(' << x << ' ' << y << ')';
	}

	double dist(point p) {
		int dx = p.x - x;
		int dy = p.y - y;
		return sqrt(dx * dx + dy * dy);
	}
} p;

struct person {
	string first_name; // fields
	string last_name;
	int grade;

	string full_name() { // method
		return first_name + ' ' + last_name;
	}
};

int main() {

	point p, q;

	p.read();
	q.read();
	cout << p.dist(q) << "\n";


	return 0;
}