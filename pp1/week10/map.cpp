#include <iostream>
#include <map>
#include <vector>
using namespace std;




int main() {

	map<string, int> strToInt;
	/*
		strToInt["Aibek"] - on first call, it initialize 
		cell for "Aibek" with initial value 0
	*/
	strToInt["Aibek"] += 1;
	strToInt["Temirlan"] += 2;
	strToInt["Aibek"] += 5;
	strToInt["Elibay"] += 3;

	cout << "With iterators:\n";
	for (map<string, int>::iterator it = strToInt.begin(); it != strToInt.end(); it++) {
		pair<string,int> entry = *it;
		cout << entry.first << ": " << entry.second << "\n";
	}


	cout << "With c++11:\n";
	for (auto &it : strToInt) {
		cout << it.first << ": " << it.second << "\n";
	}

	map<string, vector<int> > strToVec;

	strToVec["Aibek"].push_back(2);
	strToVec["Aibek"].push_back(3);
	strToVec["Temirlan"].push_back(3);
	strToVec["Elibay"].push_back(5);

	for (auto &it : strToVec) {
		cout << it.first << ": [";
		for (int x : it.second) {
			cout << x << ' ';
		}
		cout << "]\n";
	}


	return 0;
}


