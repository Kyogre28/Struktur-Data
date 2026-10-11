#include <iostream>
using namespace std;

// Menampilkan isi array integer 2D 3x3
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Menukarkan isi 2 array 2D pada posisi (baris, kolom) tertentu
void tukarPosisi(int A[3][3], int B[3][3], int baris, int kolom) {
    int temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}

// Menukarkan isi variabel yang ditunjuk oleh 2 pointer
void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    cout << "=== Array A ===\n"; tampilArray(A);
    cout << "\n=== Array B ===\n"; tampilArray(B);

    int baris, kolom;
    cout << "\nTukar isi A dan B pada posisi (baris kolom, 0-2): ";
    cin >> baris >> kolom;
    if (baris < 0 || baris > 2 || kolom < 0 || kolom > 2) {
        cout << "Posisi tidak valid!\n";
        return 1;
    }
    tukarPosisi(A, B, baris, kolom);

    cout << "\n=== Array A setelah ditukar ===\n"; tampilArray(A);
    cout << "\n=== Array B setelah ditukar ===\n"; tampilArray(B);

    cout << "\nSebelum tukar pointer: x = " << *p1 << ", y = " << *p2 << endl;
    tukarPointer(p1, p2);
    cout << "Sesudah tukar pointer: x = " << *p1 << ", y = " << *p2 << endl;

    return 0;
}
