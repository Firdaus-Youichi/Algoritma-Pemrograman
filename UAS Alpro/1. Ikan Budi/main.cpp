#include <iostream>

using namespace std;

// a= jmlh Ikan
// b= awal hari
// c= input hari

int hitungIkan(int a, int b, int c){
    if (c<=7 || (7<c && b<7)){
        if (b==7 || (b==c && b<7)){
            return a;
        } else {
            return a + hitungIkan(a*2,b+1,c);
        }
    } else if (c==8 || (8<c && b<8)){
        if(b==8){
            return a;
        } else{
            return a + hitungIkan(a/2,b+1,c);
        }
    } else if (c==9 || c==10){
        if (c==10){
            return a+2;
        } else if (c==9){
            return a+1;
        }
    } else {
        cout << "Input Tidak Valid" << endl;
    }

}

int hitungIkanSehari(int a, int b, int c){
    if (c<=7 || (8==c && b<7)){
        if (b==7 || (b==c && b<7)){
            return a;
        } else {
            return hitungIkanSehari(a*2,b+1,c);
        }
    } else if (c==8){
        if(b==8){
            return a;
        } else{
            return hitungIkanSehari(a/2,b+1,c);
        }
    } else if (c==9 || c==10){
        if (c==10){
            return a-a+1;
        } else if (c==9){
            return a-a+1;
        }
    } else {
        cout << "Input Tidak Valid" << endl;
    }

}

int main()
{
    int ikan;
    int hasilSeluruh;
    int hasilSehari;
    int day;

    cout << "Input Jumlah Ikan di Hari Pertama: ";
    cin  >> ikan;

    cout << endl << "Input Hari ke Berapa Untuk Mengetahui Jumlah Ikan: ";
    cin  >> day;

    hasilSeluruh = hitungIkan(ikan,1,day);
    hasilSehari  = hitungIkanSehari(ikan,1,day);

    cout << "Total Jumlah Ikan Hari ke-" << day << ": "<< hasilSeluruh << endl;
    cout << "Jumlah Ikan Hari ke-"       << day << "      : "<< hasilSehari << endl;


    return 0;
}
