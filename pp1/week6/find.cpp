#include <iostream>

using namespace std;


int main() {

	string s = "Hello world, my name is Alimzhan, surname Amanov!";

	cout << s.find("name") << endl;
	cout << s.find("name", 20) << endl;

	if ((int)s.find("hello") == -1) { // -1 string::npos
		cout << "Not found :(\n";
	}

	cout << s;

	// inconvinient way
	// for (int i = 0; i < s.length(); i++)
	// 	cout << s[i]

	char c[] = {'a', 'b', 'c', 'd'};
	puts(c); // how to output char array

	// cast s to char array
	puts(s.c_str());

	cout << s << "\n";
	printf("our char array is: %s \n", c);
	printf("our string is: %s \n", s.c_str());
	printf("%d - is a random integer\n", rand() % 100);



	return 0;
}
