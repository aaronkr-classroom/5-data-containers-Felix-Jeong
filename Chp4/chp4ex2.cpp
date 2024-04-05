// chp4ex2.cpp

#include <iostream>
#include <iomanip>

const int MAX = 100;

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main(void) {

    cout << setw(7);

    for (int i = 1; i <= MAX; i++) {
        cout << i << setw(7);
        cout << i * i << setw(7);
        cout << endl;
    }

    return 0;
}