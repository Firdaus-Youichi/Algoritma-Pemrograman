#include <iostream>
using namespace std;
//sequential search Ikan

int sequentialSearch(const int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int jumlah = 100;
    int daftar[jumlah];
    int target;

    for(int i=0; i<jumlah; i++){
        daftar[i]=i+1;
    }

    cout << "Masukkan ukuran yang ingin dicari: ";
    cin >> target;

    int index = sequentialSearch(daftar, jumlah, target);

    if (index != -1) {
        cout << "Ukuran ditemukan pada daftar: " << index << endl;
    } else {
        cout << "Ukuran tidak ditemukan dalam daftar" << endl;
    }

    return 0;
}

