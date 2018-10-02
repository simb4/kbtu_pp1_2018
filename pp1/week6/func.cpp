#include <iostream>

using namespace std;


int main() {

	string s = "abcd";

	// cin >> s;
	// cout << s[5] << "\n";

	// insert

	s.insert(2, "xyx");
	cout << s << "\n";

	s.insert(s.begin(), 'Z');
	cout << s << "\n";


	string a = "Hello";
	string b = "World";
	string ans = a + ' ' + b + '!';
	cout << ans << endl;

	ans.erase(ans.length()-3, 2); // removed "ld"
	cout << ans << "\n";

	ans.erase(ans.end() - 1); // removed '!'
	cout << ans << "\n";	

	ans.erase(ans.begin(), ans.end()); // removed entire string
	cout << ans << "\n";

	a.erase(a.begin() + 2, a.begin() + 4); // removed ll
	cout << a << "\n";


	



	// ans.


	return 0;
}