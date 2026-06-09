#include <iostream>
using namespace std;

int main() {
    int target;
    int array[8] = {23,19,17,15,12,7,6,2};
    int A, K, Z;

    cout << "Masukkan nilai yang dicari : ";
    cin >> target;

    A = 0;
    Z = 7;

    while (A <= Z) {
        K = (A + Z) / 2;

        if (target < array[K]) {
            A = K + 1;
        }
        else if (target > array[K]) {
            Z = K - 1;
        }
        else {
            cout << "Data ditemukan pada indeks ke-" << K;
            return 0;
        }
    }

    cout << "Data tidak ditemukan";
    return 0;
}
