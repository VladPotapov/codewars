#include <vector>
#include <iostream>
using namespace std;

int get_average(vector<int> marks) {
	int count = 0;
	int summa = 0;
	int number;
	for (int i = 0; i < marks.size(); i++) {
		if (i == 0) {
			summa += marks[i];
		}
	}
	return summa;
}

int main() {
	cout << get_average({ 2, 3, 5, 2 }) << endl;
	return 0;
}