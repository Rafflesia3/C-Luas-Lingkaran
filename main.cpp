#include <iostream>

using namespace std;

int main()
{
    int r;
    float phi=3.14,luas;

    cout << "\t\t\Pelita bangsa\n\n" << endl;
    cout << "==========================================\n" << endl;
    cout << "Nama : Rafi Alwan Setyawan \nNIM  : 311810325\n" << endl;
    cout << "==========================================\n" << endl;

    cout << "\t     Luas Lingkaran\n" << endl;


    cout << "Masukkan jari-jari lingkaran (cm)  : ";
    cin>>r;

    luas=phi*r*r;

    cout << "==========================================\n" << endl;
    cout << "Jadi, luas lingkaran adalah        : "<<luas<<" cm\n\n";
    return 0;
}
