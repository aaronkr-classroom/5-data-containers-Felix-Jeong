// chp4ex3.cpp

#include <iostream>
#include <iomanip>

const int MAX = 1000;

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main(void) {

    const int pad = log10(MAX * MAX) + 2;
    cout << setw(pad);

    for (int i = 1; i <= MAX; i++) {
        cout << i << setw(pad);
        cout << i * i << setw(pad);
        cout << endl;
    }

    return 0;
}