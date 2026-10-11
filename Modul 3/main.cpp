#include <iostream>
#include "titik.h"
using namespace std;

int main() {
    Titik a, b;

    cout << "Titik pertama" << endl;
    inputTitik(a);
    cout << "Titik kedua" << endl;
    inputTitik(b);

    tampilTitik(a);
    tampilTitik(b);
    cout << "Jarak kedua titik: " << hitungJarak(a, b) << endl;

    return 0;
}