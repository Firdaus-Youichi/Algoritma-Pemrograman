#include <iostream>

using namespace std;

//Function
int hitung_duabilangan(int x, int y){
        return x*y;
    }

int hitung_tigabilangan(int x, int y, int z){
        return x*y*z;
    }

//Procedure
void tampil(){
    cout << "Nama : Firdaus" << endl;
    cout << "NIM  : A11.2022.14607" << endl;
}

int main()
{
    tampil();

    cout << hitung_duabilangan(4,3) << endl;
    cout << hitung_duabilangan(1,3) << endl;
    cout << hitung_duabilangan(6,3) << endl;

    cout << hitung_tigabilangan(4,3,2) << endl;

//    cout << "----------------------" << endl;
//    cout << "|       BIODATA      |" << endl;
//    cout << "----------------------" << endl;
//    cout << "Nama  : Firdaus" << endl;
//    cout << "NIM   : A11.2022.14607" << endl;
//    cout << "Kelas : 4116" << endl;
//    cout << "Umur  : " << endl;
//    cout << "Kuliah: Udinus" << endl;
//    cout << "----------------------" << endl;

    return 0;
}
