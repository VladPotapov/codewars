#include <iostream>
#include <vector>
using namespace std;

void povtor(vector<int> a, vector<int> b);

int main() {
	using V = vector<int>;

	povtor(V{ 1, 2, 3 }, V{ 2, 2, 2 });

	return 0;
}

void povtor(vector<int> a, vector<int> b) {
	int total = 0;

	for (int i : a) total += i;
	for (int i : b) total += i;

	cout << total << endl;
}