#include <iostream>
using namespace std;

int main() {
    int M[3][3];
    int i, j;
    int total = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> M[i][j];
            if (i == j) {
                total = total + M[i][j];
            }
        }
    }

    cout << total << endl;

    return 0;
}