#include <iostream>
using namespace std;

void selectionSort(int array[], int size) {
    for (int i=0; i<size-1; i++) {
        int mini = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[mini]) {
                mini = j;
            }
        }
        swap(array[i], array[mini]);
    }
}

void printArray(int array[], int size) {
    for (int i=0; i<size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Masukan Jumlah Ukuran Ikan: ";
    cin >> size;
    int ukuran[size];

    cout << "Masukkan " << size << " Ukuran:" << endl;
    for (int i=0; i<size; i++) {
        cout << "Ukuran ke-" << i+1 << ": ";
        cin >> ukuran[i];
    }

    cout << "Ukuran sebelum diurutkan: ";
    printArray(ukuran, size);

    selectionSort(ukuran, size);

    cout << "Ukuran setelah diurutkan: ";
    printArray(ukuran, size);

    return 0;
}
