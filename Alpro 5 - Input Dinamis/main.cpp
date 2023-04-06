#include <iostream>
using namespace std;

int main()
{
    //Input Array
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array:" << endl;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Sorting Bubble
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array yang sudah diurutkan:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting Selection
    for(int i = 0; i < n - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    cout << "Array yang sudah diurutkan:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
