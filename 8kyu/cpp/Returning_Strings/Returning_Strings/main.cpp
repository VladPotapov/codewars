#include <iostream>
using namespace std;

string n;
string greet(const string &n);

int main() {
	
	string greet(const string  &n) {

		cout << "Hello, " << n << " how are you doing today?";
	}
	greet(n);

	return 0;
}