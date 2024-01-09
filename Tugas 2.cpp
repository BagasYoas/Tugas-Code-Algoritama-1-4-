/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Nama : Bagas Yoas Sibagariang
//Nim : 20230801254
//Matkul : Algoritma dan Pemograman (tugas 2)

#include <iostream>

using namespace std;

void luas_persegi (float s) {
    float luas = s*s;
    cout << "luas persegi dengan sisi " << s << " adalah " << luas << endl;
}

void luas_lingkaran (float r, float q = 3.14) {
    float luas = q*r*r;
    cout << "luas lingkaran dengan jari-jari " << r << " adalah " << luas << endl;
}

void luas_persegi_panjang (float p, float l) {
    float luas = p*l;
    cout <<"luas lingkaran dengan panjang " << p << " dan lebar " << l << " adalah " << luas << endl;
}
    

int main()
{
    int nomor ;
    cout << "masukkan pilihan [1,2,3] " << endl;
    cout << "1. luas persegi" << endl;
    cout << "2. luas lingkaran" << endl;
    cout << "3. luas persegi panjang" << endl;
    cout << "Masukkan pilihan Anda: " ; cin >> nomor;
    switch ( nomor ) {
        case 1 :
        float s;
        cout << "masukan sisi persegi: ";
        cin >> s;
        luas_persegi (s) ;
        break;
        
        case 2 :
        float r;
        float q;
        cout << "masukan jari-jari lingkaran: ";
        cin >> r;
        luas_lingkaran (r, q = 3.14) ;
        break;
        
        case 3 :
        float p;
        float l;
        cout << "masukan panjang persegi panjang: ";
        cin >> p;
        cout << "masukan lebar persegi panjang: ";
        cin >> l;
        luas_persegi_panjang (p, l) ;
        break;
        
        default :
        cout << "pilihan default" << endl;
        break;
    }
    
    
    return 0;
}



