#include <iostream>
#include <cmath>
#include <random>
#include <algorithm>
using namespace std;

const string names[10] = {
	"Aigul",
	"Maksat",
	"Abylaikhan",
	"Dinara",
	"Beksultan",
	"Aizhan",
	"Alimzhan",
	"Marina",
	"Yersultan",
	"Aidana"
};

struct number {
	int num;
	number() : num(0) {} // num = 0;
	number(int x) : num(x) {} // num = x;
};

struct person {
	int age;
	string name;
	person(int _age, string _name)
		: age(_age), name(_name) {}


	void out() {
		cout << name << ' ' << age << "\n";
	}
};


int main() {

	srand(time(NULL));

	// person p = person(28, 'random');
	// p.out()

	// pointer that points nowhere
	person *aigul;
	person *zapas_aigul;
	// create object and assign its pointer to aigul
	aigul = new person(30, "Aigul");
	zapas_aigul = aigul;

	zapas_aigul->age = 31;
	if (aigul->age == 31) {
		cout << "pointers really are only pointers\n";
	}

	aigul->name;
	aigul->age;
	aigul->out();

	/*
		Here memory leakage happens
		TODO: Fix delete
	*/
	delete (person*) aigul;
	cout << "Deleted " << zapas_aigul->name << endl;

	// reassign the new object to aigul
	aigul = new person(20, "Samat");

	aigul->out();

	aigul = NULL;

	aigul->out();


	return 0;
}

