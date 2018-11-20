#include <iostream>
#include <cmath>
using namespace std;

struct point {
	double x, y;

	point() { // (0, 0)
		this->x = 0;
		this->y = 0;
	}

	point(double x) { // (x, x)
		this->x = this->y = x;
	}

	point(double x, double y) { // (x, y)
		this->x = x;
		this->y = y;
	}

	point(double fake, double phi, double r) {// polar coordinates
		this->x = r * cos(phi);
		this->y = r * sin(phi);
	}
	void out() { printf("(%.3f, %.3f)", x, y); }
};

point p;

/*
	point {
	 	description of sctruct
	} p;
*/

int main() {

	cout << p.x << ' ' << p.y << "\n";

	p.x = 2;
	p.y = 3;
	// same as point p(2, 3);
	cout << p.x << ' ' << p.y << "\n";

	point q(2);
	q.out(); // (2, 2)
	cout << endl;

	point r(4, 7);
	r.out(); // (4, 7)
	cout << endl;

	point z(0, 45, 1);
	z.out();
	cout << endl;


	return 0;
}