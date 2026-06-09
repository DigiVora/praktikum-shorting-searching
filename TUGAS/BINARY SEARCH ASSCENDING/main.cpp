#include <iostream>
using namespace std;

int main() {

    int L[12] = {0, 8, 3, 1, 1, 6, 1, 5, 2, 8, 9, 1};
    int i, k, temp;
    int cari;
    bool ditemukan = false;

    cout << "Data Awal : ";
    for(i = 0; i < 12; i++) {
        cout << L[i] << " ";
    }
    
    for(i = 0; i < 12; i++) {
        for(k = 11; k > i; k--) {
            if(L[k] < L[k-1]) {
                temp = L[k];
                L[k] = L[k-1];
                L[k-1] = temp;
            }
        }
    }

    cout << "\n\nData Setelah Diurutkan Ascending : ";
    for(i = 0; i < 12; i++) {
        cout << L[i] << " ";
    }

    cout << "\n\nMasukkan angka yang mau dicari : ";
    cin >> cari;

    int A = 0;
    int Z = 11;
    int K;

    while(A <= Z) {
        K = (A + Z) / 2;

        if(cari < L[K]) {
            Z = K - 1;
        }
        else if(cari > L[K]) {
            A = K + 1;
        }
        else {
            cout << "Data ditemukan pada indeks ke-" << K;
            ditemukan = true;
            break;
        }
    }

    if(!ditemukan) {
        cout << "Data tidak ditemukan";
    }

    return 0;
}
