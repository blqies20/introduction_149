#include <iostream>
using namespace std;

int main(){
    float Panjang, Lebar, Luas;

    cout << "Masukkan panjangnya = ";
    cin >> Panjang;

    cout << "Masukkan lebarnya = ";
    cin >> Lebar;
    
    Luas = Panjang * Lebar;
    cout << "Luasnya adalah = "<< Luas;
}