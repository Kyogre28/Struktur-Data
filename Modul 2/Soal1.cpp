#include <iostream>
using namespace std;
int main(){
    int n, i, rata_rata;
    int total = 0;
    int jumlah = 0;

    cout << "Masukan Jumlah Mahasiswa : ";
    cin >> n;
    
    int N[n];

    cout << "Masukan nilai setiap Mahasiswa : ";
    for (i = 0; i < n ; i++){
        cin >> N[i];
        total = total + N[i];
        }
    rata_rata = total/n;
    for (i = 0; i < n ; i++){
        if(N[i] > rata_rata){
            jumlah = jumlah+1;
        }
    }
    cout << "maka nilai rata ratanya adalah : "<<rata_rata<<endl;
    cout << "Maka nilai yang melebihi rata rata adalah : "<<jumlah<<endl;
    return 0;
}