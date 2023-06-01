#include <iostream>

using namespace std;

int popIkan(int year) {
   if (year == 0) {
        return 1;
    }

    return year * popIkan(year - 1);
}

int main() {
    int years;
    cout << "Input Tahun: ";
    cin >> years;

    if (years < 0) {
        cout << "Invalid" << endl;
    } else {
        int population = popIkan(years);
        cout << "Perkiraan populasi Ikan Setelah " << years << " Tahun: " << population << endl;
    }

    return 0;
}
