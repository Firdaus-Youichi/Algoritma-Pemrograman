#include <iostream>

using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int fibSum(int m){
    if(m<=0){
        return 0;
    }
    if(m==1){
        return 1;
    }
    return fibSum(m-1) + fibSum(m-2) + 1;
}


int main()
{
    cout << "===Total Ikan Yang Dibeli===" << endl;
    int a;
    cout << "Masukan Angka: ";
    cin >> a;
    for(int i=0; i<a; i++){
        cout << fib(i) << endl;
    }

    if(a < 0) {
        cout << "Input Tidak Valid" << endl;
    } else {
        int sum = fibSum(a);
        cout << "Total Ikan: " << sum << endl;
    }
    return 0;
}
