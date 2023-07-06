#include <iostream>
#include <string>

using namespace std;

struct Ikan {
  string nama;
  double berat;
};

void ubahBerat(Ikan *Ikan, int ukuran, const string &namaIkan){
    for (int i=0; i<ukuran; i++){
        if (Ikan[i].nama == namaIkan){
            Ikan[i].berat *= 2.0;
            break;
        }
    }
}

void tampilanKoleksi(Ikan *Ikan, int ukuran){
    for (int i=0; i<ukuran; i++){
        cout << "Ikan ke-" << i+1 << ": \n";
        cout << "Nama: "   << Ikan[i].nama << "\n";
        cout << "Berat: "  << Ikan[i].berat << " kg\n" << endl;
    }
}

int main() {
  int ukuranKoleksi;
  string ikanUbahBerat;

  cout << "Input Jumlah Ukuran Koleksi Ikan: ";
  cin  >> ukuranKoleksi;
  cin.ignore();

  Ikan *koleksiIkan = new Ikan[ukuranKoleksi];

  for(int i=0; i<ukuranKoleksi; i++){
    cout << "Nama Ikan ke-" << i+1 << ": ";
    getline(cin, koleksiIkan[i].nama);
    cout << "Berat Ikan ke-" << i+1 << "kg: ";
    cin >> koleksiIkan[i].berat;
    cin.ignore();
  }

  cout << "Input Nama Ikan Yang Ingin Beratnya Diubah: ";
  getline(cin, ikanUbahBerat);
  cin.ignore();

  ubahBerat(koleksiIkan, ukuranKoleksi, ikanUbahBerat);

  cout << endl << "Koleksi Ikan Setelah Diubah:" << endl;
  tampilanKoleksi(koleksiIkan, ukuranKoleksi);

  delete[] koleksiIkan;

  return 0;
}
