// chp4ex4.cpp
#include <iostream>
#include <iomanip>
#include <cmath>

const double MAX = 10.0;

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setprecision;

int main(void) {

    cout << setprecision(3);
    cout << setw(8);

    for (double i = 1; i <= MAX; i += 0.1) {
        cout << i << setw(8);
        cout << i * i << setw(8);
        cout << endl;
    }

    return 0;
}