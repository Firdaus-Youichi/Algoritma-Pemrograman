#include <iostream>

using namespace std;

/*Kontrak Mata Kuliah Alpro
Tugas: 40%
UTS  : 30%
UAS  : 30%
*/

// Function untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    float nilaiAkhir;

    // Kontrak kuliah dengan persentase nilai
    float persenTugas = 40;
    float persenUTS = 30;
    float persenUAS = 30;

    nilaiAkhir = (uts * persenUTS / 100) + (uas * persenUAS / 100) + (tugas * persenTugas / 100);

    return nilaiAkhir;
}

// Procedure untuk menentukan nilai huruf
void tentukanNilaiHuruf(float nilaiAkhir) {
    char nilaiHuruf;

    if (nilaiAkhir >= 90) {
        nilaiHuruf = 'A';
    } else if (nilaiAkhir >= 85) {
        nilaiHuruf = 'AB';
    } else if (nilaiAkhir >= 80) {
        nilaiHuruf = 'B';
    } else if (nilaiAkhir >= 75) {
        nilaiHuruf = 'BC';
    } else if (nilaiAkhir >= 70){
        nilaiHuruf = 'C';
    } else {
        nilaiHuruf = 'E';
    }

    cout << "Nilai Huruf: " << nilaiHuruf << endl;
}

int main() {
    float uts, uas, tugas, nilaiAkhir;

    cout << "Masukkan nilai UTS: ";
    cin >> uts;

    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    cout << "Masukkan nilai Tugas: ";
    cin >> tugas;

    nilaiAkhir = hitungNilaiAkhir(uts, uas, tugas);

    cout << "Nilai Akhir: " << nilaiAkhir << endl;

    tentukanNilaiHuruf(nilaiAkhir);

    return 0;
}
