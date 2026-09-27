#include <iostream>
using namespace std;

string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima",
                    "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};

int main() {
    int n;
    cin >> n;

    cout << n << " : ";
    if (n == 100) cout << "seratus";
    else if (n <= 11) cout << satuan[n];
    else if (n < 20) cout << satuan[n-10] << " belas";
    else {
        cout << satuan[n/10] << " puluh";
        if (n % 10) cout << " " << satuan[n%10];
    }
}