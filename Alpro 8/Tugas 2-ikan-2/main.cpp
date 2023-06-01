#include <iostream>

using namespace std;

int fak(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fak(n - 1);
}

int main() {
    cout << "===Jumlah Ikan Seluruh Tong===" << endl;
    int nomor;
    cout << "Masukan Jumlah Tong: ";
    cin >> nomor;

    if (nomor < 0) {
        cout << "Tidak Dapat Terhitung" << endl;
    } else {
        int hasil = fak(nomor);
        cout << "Terdapat " << hasil << " Ekor Ikan " << endl;
    }

    return 0;
}
