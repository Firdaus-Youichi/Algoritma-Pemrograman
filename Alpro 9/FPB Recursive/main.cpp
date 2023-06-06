#include <iostream>
using namespace std;

int fpb(int a, int b) {
    if (b == 0) {
        return a;
    }
    return fpb(b, a % b);
}

int main() {
    int number1, number2;
    cout << "Masukan 2 angka: ";
    cin >> number1 >> number2;

    if (number1 <= 0 || number2 <= 0) {
        cout << "Invalid input. Numbers must be positive integers." << endl;
    } else {
        int result = fpb(number1, number2);
        cout << "FPB dari " << number1 << " and " << number2 << " adalah: " << result << endl;
    }

    return 0;
}
