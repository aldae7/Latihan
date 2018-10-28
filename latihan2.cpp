#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    cout << "Masukkan nilai A : "; cin >> a;
    cout << "Masukkan nilai B : "; cin >> b;
    cout << "Masukkan bilai C : "; cin >> c;

    if(a<b && a<c){
        if(b<c){
            cout << a << ' ' << b << ' ' << c << endl;
        }else{
            cout << a << ' ' << c << ' ' << b << endl;
        }
    }else if(b<a && b<c){
        if(a<c){
            cout << b << ' ' << a << ' ' << c << endl;
        }else{
            cout << b << ' ' << c << ' ' << a << endl;
        }
    }else{
        if(b<a){
            cout << c << ' ' << b << ' ' << a << endl;
        }else{
            cout << c << ' ' << a << ' ' << b << endl;
        }
    }
    return 0;
}
