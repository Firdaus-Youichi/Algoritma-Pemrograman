#include <iostream>

using namespace std;

int fak(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fak(n - 1);
}

int main() {
    cout << "===Kombinasi Penempatan Pot Bonsai===" << endl;
    int nomor;
    cout << "Masukan Jumlah Pot: ";
    cin >> nomor;

    if (nomor < 0) {
        cout << "Tidak Dapat Terhitung" << endl;
    } else {
        int hasil = fak(nomor);
        cout << "Terdapat " << hasil << " Kombinasi " << endl;
    }

    return 0;
}
