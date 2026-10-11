#include <iostream>
#include <string>
using namespace std;

const int MAX = 10;

struct mahasiswa {
    string nama, nim;
    float uts, uas, tugas, nilaiAkhir;
};

// FUNGSI penghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3f * uts + 0.4f * uas + 0.3f * tugas;
}

void inputMhs(mahasiswa &m) {
    cout << "Nama   : "; cin >> ws; getline(cin, m.nama);
    cout << "NIM    : "; cin >> m.nim;
    cout << "UTS    : "; cin >> m.uts;
    cout << "UAS    : "; cin >> m.uas;
    cout << "Tugas  : "; cin >> m.tugas;
    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

int main() {
    mahasiswa data[MAX];
    int n;

    do {
        cout << "Jumlah mahasiswa (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        inputMhs(data[i]);
    }

    cout << "\n=== DATA MAHASISWA ===\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << data[i].nama
             << " | NIM: " << data[i].nim
             << " | UTS: " << data[i].uts
             << " | UAS: " << data[i].uas
             << " | Tugas: " << data[i].tugas
             << " | Nilai Akhir: " << data[i].nilaiAkhir << endl;
    }
    return 0;
}
