#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    int usia;
};

int main() {
    Mahasiswa mhs1;

    mhs1.nama = "Fadri Asliarga";
    mhs1.usia = 150;

    Mahasiswa* ptrMhs = &mhs1;

    cout << "Nama Mahasiswa: " << ptrMhs->nama << endl;
    cout << "Usia Mahasiswa: " << ptrMhs->usia << endl;

    ptrMhs->usia = 17;

    cout << "Usia Mahasiswa setelah diubah: " << mhs1.usia << endl;

    return 0;
}
