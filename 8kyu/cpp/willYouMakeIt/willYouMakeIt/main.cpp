#include <iostream>
using namespace std;
bool willYouMakelt(int distance_to_pump, int mpg, int fuel_left);
int main() {
	bool name = willYouMakelt(90, 50, 2);
	cout << name;
}

bool willYouMakelt(int distance_to_pump, int mpg, int fuel_left) {
	return distance_to_pump <= mpg * fuel_left;
}