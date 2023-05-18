#include <iostream>

using namespace std;

int square(int p, int l){
    return p*l;
}

void cetak(int hasil){
    cout << "Luasnya adalah " << hasil;
}

int main()
{
    int p, l;
    cout << "Masukan panjang: ";
    cin >> p;
    cout << "Masukan lebar: ";
    cin >> l;

    int hasil = square(p, l);
    cetak(hasil);
    return 0;
}
