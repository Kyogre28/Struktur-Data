#include <iostream>
using namespace std;

int hitung(string kata, char huruf) {
    int jumlah = 0;
    for (int i = 0; i < kata.length(); i++) {
        if (kata[i] == huruf) {
            jumlah = jumlah + 1;
        }
    }
    return jumlah;
}

int main() {
    string kata;
    char huruf;

    cin >> kata;
    cin >> huruf;

    cout << hitung(kata, huruf) << endl;
}