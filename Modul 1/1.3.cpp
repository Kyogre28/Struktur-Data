#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;
    cout << "output:" << endl;

    for (int k = n; k >= 0; k--) {
        cout << string((n - k) * 2, ' ');       // indentasi
        for (int i = k; i >= 1; i--) cout << i << " ";  // kiri
        cout << "* ";                            // bintang
        for (int i = 1; i <= k; i++) cout << i << " "; // kanan
        cout << endl;
    }
}