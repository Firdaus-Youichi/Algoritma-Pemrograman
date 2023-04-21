#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n-1; i++) {

        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main() {
    int n, x;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan " << n << " elemen:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sortingMethode;
    cout << "===Pilih Metode Sorting===" << endl;
    cout << "1. Bubble \n";
    cout << "2. Selection \n";
    cout << "3. Insertion \n";
    cout << "Masukan nomor: ";
    cin >> sortingMethode;

    int searchMethode;
    cout << "===Pilih Metode Searching===" << endl;
    cout << "1. Linear \n";
    cout << "2. Binary \n";
    cout << "Masukan nomor: ";
    cin >> searchMethode;

    cout << endl << "Sebelum diurutkan:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    if (sortingMethode==1){
        bubbleSort(arr, n);
        cout << "Setelah diurutkan bubble sort:\n";
        for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
    } else if (sortingMethode==2){
        selectionSort(arr, n);
        cout << "Setelah diurutkan selection sort:\n";
        for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
    } else if (sortingMethode==3){
        insertionSort(arr, n);
        cout << "Setelah diurutkan insertion sort:\n";
        for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
    }

    if (searchMethode==1){
        cout << "Masukkan nilai yang ingin dicari (linear): ";
        cin >> x;
        int result = linearSearch(arr, n, x);
        if (result == -1){
            cout << "Nilai " << x << " tidak ditemukan dalam array";
        } else {
            cout << "Nilai " << x << " ditemukan pada index ke-" << result;
        }
    } else if (searchMethode==2){
        cout << "Masukkan nilai yang ingin dicari (binary): ";
        cin >> x;
        int result = binarySearch(arr, 0, n - 1, x);
        if (result == -1){
            cout << "Nilai " << x << " tidak ditemukan dalam array";
        } else {
            cout << "Nilai " << x << " ditemukan pada index ke-" << result;
        }
    }


    return 0;
}
