#include <iostream>
using namespace std;

float Panjang, Lebar, Luas;
void inputData(){
    cout << "Masukkan panjangnya = ";
    cin >> Panjang;

    cout << "Masukkan lebarnya = ";
    cin >> Lebar;
}
float hitungLuas(){
    Luas = Panjang * Lebar;
    return Luas;
}
void outputData(){
    cout << "Luasnya adalah = "<< Luas;
}

int main(){
    inputData();
    hitungLuas();
    outputData();
}