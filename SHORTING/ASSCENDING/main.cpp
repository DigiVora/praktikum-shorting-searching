#include <iostream>
using namespace std;

int main() {
    int L[5], i, k, temp;

    L[0] = 1;
    L[1] = 50;
    L[2] = 10;
    L[3] = 3;
    L[4] = 2;

    for(i = 0; i <= 4; i++) {
        for(k = 4; k > i; k--) {
            if(L[k] < L[k - 1]) {
                temp = L[k];
                L[k] = L[k - 1];
                L[k - 1] = temp;
            }
        }
    }

    cout << "Hasil Urut Ascending :" << endl;

    for(i = 0; i <= 4; i++) {
        cout << L[i] << endl;
    }

    return 0;
}
