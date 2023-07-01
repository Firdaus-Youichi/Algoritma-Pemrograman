#include <iostream>
#include <string>

#define MAX_WARGA 5

using namespace std;

typedef struct {
    char nik[15];
    char nama[10];
    int umur;
} Warga;

int main() {
    Warga dataWarga[MAX_WARGA];

    cout << "Masukkan data warga:\n";
    for (int i = 0; i < MAX_WARGA; i++) {
        cout << "Data Warga " << i + 1 << ":\n";

        cout << "NIK: ";
        cin >> dataWarga[i].nik;

        cout << "Nama: ";
        cin >> dataWarga[i].nama;

        cout << "Umur: ";
        cin >> dataWarga[i].umur;

        cout << "\n";
    }

    cout << "Data Warga yang dimasukkan:\n";
    for (int i = 0; i < MAX_WARGA; i++) {
        cout << "Data Warga " << i + 1 << ":\n";
        cout << "NIK: " << dataWarga[i].nik << endl;
        cout << "Nama: " << dataWarga[i].nama << endl;
        cout << "Umur: " << dataWarga[i].umur << endl << endl;
    }

    return 0;
}
