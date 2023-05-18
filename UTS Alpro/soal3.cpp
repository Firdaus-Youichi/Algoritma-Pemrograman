#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "DATA TANAMAN DI KEBUN" << endl;
    int size;
    cout << "Masukan Jumlah Tanaman: ";
    cin >> size;

    int nomor[size];

    for (int i = 0; i < size; i++) {
        cout << "Nomor ke-" << i + 1 << ": ";
        cin >> nomor[i];
    }


    cout << "Tanaman sebelum diurutkan: ";
    printArray(nomor, size);

    bubbleSort(nomor, size);

    cout << "Tanaman setelah diurutkan: ";
    printArray(nomor, size);

    return 0;
}
