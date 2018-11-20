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


struct person {
	int age;
	string name;
	person* son;

	person(string _name, int _age)
		: age(_age), name(_name) {}

	person(string _name, int _age, person* son)
		: age(_age), name(_name), son(son) {
		}

	void out() {
		cout << name << ' ' << age << "\n";
	}
};


int main() {

	srand(time(NULL));
	// (person*) D
	// person D - D is type of (person)
	// person* D - D is type of (pointer to person)
	// person *D - -----||----- (same)

	person* D = new person("Dinara", 2);
	person* A = new person("Aspandiyar", 18, D);
	cout << A->son->name << "\n";

	person copyA = *A;
	copyA.name += "Copy";
	cout << copyA.name << " not " << A->name << "\n";
	cout << "But son is still " << copyA.son->name << "\n";
	D->age = 5;
	cout << "Age changed in A " << A->son->age << "\n";
	cout << "Age changed in copyA " << copyA.son->age << "\n";




	return 0;
}

