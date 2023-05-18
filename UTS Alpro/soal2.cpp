#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

//harus menggunakan library random dan algoritm


bool isSorted(int array[], int size) {
    for (int i = 1; i < size; i++) {
        if (array[i] < array[i - 1]) {
            return false;
        }
    }
    return true;
}


void shuffleArray(int array[], int size) {
    random_device rd;
    mt19937 rng(rd());
    shuffle(array, array + size, rng);
}


void bogoSort(int array[], int size) {
    while (!isSorted(array, size)) {
        shuffleArray(array, size);
    }
}


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int size ;
    cout << "Input Jumlah Angka: ";
    cin >> size;

    int array[size];

    for(int i=0; i<size; i++){
        cout << "Baris ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Angka sebelum diurutkan: ";
    printArray(array, size);

    bogoSort(array, size);

    cout << "Angka setelah diurutkan: ";
    printArray(array, size);

    return 0;
}

