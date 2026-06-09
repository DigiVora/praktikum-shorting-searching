#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int bil[5] = {23, 21, 22, 19, 18};
    int angka;
    bool ditemukan = false;
    
    cout << "Data : ";
    for (int i= 0; i < 5; i++) {
        cout << setw(4) << bil[i];
		}
    cout << endl;
    cout << "Masukkan angka yang mau dicari : ";
    cin >> angka;
    for (int i = 0; i < 5; i++) {
        if (bil[i] == angka) {
            cout << "Angka berada di indeks ke-" << i << endl;
            ditemukan = true;
            break;}
    }
    if (!ditemukan) { cout << "Data tidak ditemukan." << endl;}
    return 0;
}
