/*
double SakuraFall(double v) {
     // ... write your codes here ...
}
*/
#include <iostream>
using namespace std;
double SakuraFall(double v) {
    // ���� ����� �������������
    if (v <= 0) {
        return 0;
    }
    else {
        double t = 80 / v;
        return t * v;
    }
}
int main() {
    return 0;
}