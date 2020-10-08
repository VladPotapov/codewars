/*int cockroach_speed(double s)
{
    return 0;
}*/

#include <iostream>
// for floor in cockroach_speed3
#include <cmath>

using namespace std;

//my code
int cockroach_speed(double s) {
    return s / 0.036;
}

int cockroach_speed1(double s) {
    if (s < 0) return 0;
    return s / 0.036;
}

// codewars
int cockroach_speed2(double s) {
    return s * 1000 / 36;
}

int cockroach_speed3(double s) {
    return floor(s * 1e5 / 3600);
}

int cockroach_speed4(double s) {
    return int(s * 100000 / 3600);
}

int cockroach_speed5(double s) {
    return s / 3.6 * 100;
}

int main() {
    cout << cockroach_speed5(8) << endl;

    return 0;
}