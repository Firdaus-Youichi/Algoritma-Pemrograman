#include <iostream>
using namespace std;

// Binary search
int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) {
            return mid;
        }

        if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int jumlah = 200;
    int nomor[jumlah];
    int target;

    for(int i=0; i<jumlah; i++){
        nomor[i]=i+1;
    }


    cout << "Masukkan nomor tanaman yang ingin dicari: ";
    cin >> target;

    if(nomor[jumlah]%2==0){
        int index = binarySearch(nomor, jumlah, target);

        if (index != -1) {
            cout << "Nomor ditemukan pada data: " << index << endl;
        } else {
            cout << "Nomor tidak ditemukan dalam data" << endl;
        }
    } else{
        cout << "Nomor tidak ditemukan dalam data" << endl;
    }



    return 0;
}
