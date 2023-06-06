#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Masukan Nomor Bumbu: ";
    cin >> number;

    if (number < 0) {
        cout << "Mana ada bumbu nomor negatif pekok." << endl;
    } else {
        cout << "Komposisi Bumbu: ";
        for (int i = 0; i < number; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}
