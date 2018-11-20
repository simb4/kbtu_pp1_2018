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
	string name;
	char gender;
	int age;

	person(string name, char gender, int age) {
		this->name = name;
		this->gender = gender;
		this->age = age;
	}

	string operator +(person p) {
		string name = names[rand() % 10];
		return name;
	}

	bool operator< (person p) {
		if (age == p.age) return name < p.name;
		return age < p.age;
	}

};


int main() {

	srand(time(NULL));

	person p("Aspandiyar", 'M', 18);
	person q("Aigul", 'G', 20);

	string newName = p + q;
	cout << newName << " was born\n";

	vector<person> vp;
	for (int i = 0; i < 10; i++) {
		vp.push_back(person(
			names[i],
			'M',
			18 + rand() % 3 // [18, 20]
			));
	}

	sort(vp.begin(), vp.end());
	for (person p : vp) {
		cout << p.name << ' ' << p.age << "\n";
	}
	

	return 0;
}

