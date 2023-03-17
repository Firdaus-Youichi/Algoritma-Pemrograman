#include <iostream>
using namespace std;

// Deklarasi fungsi
void tampilkanMenu();
void tampilkanMenuMakanan();
void tampilkanMenuMinuman();
void pesanMakanan();
void pesanMinuman();
void selesai();

int main() {
    int pilihan;

    do {
        tampilkanMenu();
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                pesanMakanan();
                break;
            case 2:
                pesanMinuman();
                break;
            case 3:
                selesai();
                break;
            default:
                cout << "Pilihan tidak tersedia. Silakan coba lagi." << endl;
        }
    } while (pilihan != 3);

    return 0;
}

// Implementasi fungsi
void tampilkanMenu() {
    cout << "========================" << endl;
    cout << "  MENU RESTORAN PIZZA   " << endl;
    cout << "========================" << endl;
    cout << "1. Pesan Makanan" << endl;
    cout << "2. Pesan Minuman" << endl;
    cout << "3. Selesai" << endl;
}

void tampilkanMenuMakanan() {
    cout << "========================" << endl;
    cout << "      MENU Makanan      " << endl;
    cout << "========================" << endl;
    cout << "1. Pizza Italia" << endl;
    cout << "2. Pizza Amerika" << endl;
    cout << "3. Selesai" << endl;
}

void tampilkanMenuMinuman() {
    cout << "========================" << endl;
    cout << "      MENU Minuman      " << endl;
    cout << "========================" << endl;
    cout << "1. CocaCola" << endl;
    cout << "2. Orange Juice" << endl;
    cout << "3. Selesai" << endl;
}


void pesanMakanan() {
    int pilMakanan;
    tampilkanMenuMakanan();
    do {
        ;
        cout << "Masukkan pilihan Makanan: ";
        cin >> pilMakanan;

        switch (pilMakanan) {
            case 1:
                cout << "Pizza Italia" << endl;
                break;
            case 2:
                cout << "Pizza Amerika" << endl;;
                break;
            case 3:
                selesai();
                break;
            default:
                cout << "Pilihan tidak tersedia. Silakan coba lagi." << endl;
        }
    } while (pilMakanan != 3);
    }


void pesanMinuman() {
    int pilMinuman;
    tampilkanMenuMinuman();
    do {
        ;
        cout << "Masukkan pilihan Minuman: ";
        cin >> pilMinuman;

        switch (pilMinuman) {
            case 1:
                cout << "Coca Cola" << endl;
                break;
            case 2:
                cout << "Orange Juice" << endl;;
                break;
            case 3:
                selesai();
                break;
            default:
                cout << "Pilihan tidak tersedia. Silakan coba lagi." << endl;
        }
    } while (pilMinuman != 3);
}

void selesai() {
    cout << "Terima kasih telah mengunjungi restoran kami." << endl;
}
