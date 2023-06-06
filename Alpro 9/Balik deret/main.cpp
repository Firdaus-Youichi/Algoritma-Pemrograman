#include <iostream>
using namespace std;

void balik(int n) {
    if (n <= 0) {
        return;
    }
    balik(n - 1);
    cout << n << " ";
}

int main() {
    int angka;
    cout << "Masukan angka: ";
    cin >> angka;

    if (angka <= 0) {
        cout << "Dibilang jangan angka negatif, batu bgt." << endl;
    } else {
        balik(angka);
        cout << endl;
    }

    return 0;
}
