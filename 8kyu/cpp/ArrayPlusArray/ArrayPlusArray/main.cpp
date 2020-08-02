//vector замена стандартному динамическому массиву, 
//память для которого выделяется вручную, 
//с помощью оператора new
#include <vector>
#include <iostream>
using namespace std;

void arrayPlusArray(std::vector<int> a, std::vector<int> b);

//codewars
void arrayPlusArray2(std::vector<int> a, std::vector<int> b);

int main() {
	using V = std::vector<int>;

	arrayPlusArray(V{ 1, 2, 3 }, V{ 4, 5, 6 });
	arrayPlusArray2(V{ 1, 3, 5 }, V{ 2, 4, 6 });

	return 0;
}

void arrayPlusArray(std::vector<int> a, std::vector<int> b) {
	int arr1 = 0;
	int arr2 = 0;

	for (int i = 0; i < a.size(); i++) {
		arr1 = arr1 + a[i];
	}

	for (int i = 0; i < b.size(); i++) {
		arr2 = arr2 + b[i];
	}

	cout << arr1 + arr2 << endl;
}

//codewars
void arrayPlusArray2(std::vector<int> a, std::vector<int> b) {
	int total = 0;

	for (int i : a) total += i;
	for (int i : b) total += i;

	cout << total << endl;
}