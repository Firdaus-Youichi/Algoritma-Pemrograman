#include <iostream>
#include <vector>
using namespace std;

int sequentialSearch(vector<int> arr, int x) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int binarySearch(vector<int> arr, int x) {
    int n = arr.size();
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            r = mid - 1;

        else
            l = mid + 1;
    }

    return -1;
}

int main() {
    int n, x;
    cout << "Masukan jumlah array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Masukan " << n << " interger:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Masukan nilai yang dicari: ";
    cin >> x;

    int result1 = sequentialSearch(arr, x);
    int result2 = binarySearch(arr, x);

    if (result1 == -1)
        cout << "Elemen tidak terdapat di array (Sequential Search)";
    else
        cout << "Elemen terdapat di index " << result1 << " (Sequential Search)";

    cout << endl;

    if (result2 == -1)
        cout << "Elemen tidak terdapat di array (Binary Search)";
    else
        cout << "Elemen terdapat di index " << result2 << " (Binary Search)";

    return 0;
}
