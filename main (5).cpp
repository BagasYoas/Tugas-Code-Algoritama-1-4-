/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;



int main()
{
    int nomor;
    int hargaEkonomi = 100000;
    int hargaBisnis = 200000;
    int hargaEksekutif = 300000;
    int jumlahTiket;
    int totalHarga;
    string namaOrang;
    
    cout << "Masukkan nama Orang: "; cin >>namaOrang;
    cout << endl;
    cout << "masukkan jumlah tiket: " ; cin >> jumlahTiket;
    cout << endl;
    cout << "---------------------------" << endl;
    cout << "pilihan dalam tiket: " << endl;
    cout << "1. Ekonomi (100ribu/tiket)" << endl;
    cout << "2. Bisnis (200ribu/tiket)" << endl;
    cout << "3. Eksekutif(300ribu/tiket)" << endl;
    cout << "Masukan pilihan Anda = "; cin >> nomor;
    cout << "---------------------------" << endl;
    
    switch (nomor) {
        case 1:
        totalHarga = jumlahTiket * hargaEkonomi;
        break;
        case 2:
        totalHarga = jumlahTiket * hargaBisnis;
        break;
        case 3:
        totalHarga = jumlahTiket * hargaEksekutif;
        break;
        default:
        cout << "Pilihan tidak ada di pilihan menu" << endl;
        break;
    }
    
    //diskon
    if (totalHarga > 500000){
        totalHarga *= 0.9;
        cout << "total harga uang melebihi 500 ribu " << endl;
        cout << "anda mendapatkan diskon 90%" << endl;
    }else if (totalHarga > 300000){
        totalHarga *= 0.95;
        cout << "total harga uang melebihi 300 ribu " << endl;
        cout << "anda mendapatkan diskon 95%" << endl;
    }else if (totalHarga > 200000){
        totalHarga *= 0.98;
        cout << "total harga uang melebihi 200 ribu " << endl;
        cout << "anda mendapatkan diskon 98%" << endl;
    }
    
    cout << "---------------------------" << endl;
    cout << "Pemesan atas Nama : " << namaOrang << endl;
    cout << "total tiket yang dibeli : " << jumlahTiket << endl;
    if (nomor == 1) {
        cout << "tiket yang dibeli : Tiket Ekonomi" << endl;
    } else if (nomor == 2) {
        cout << "tiket yang dibeli : Tiket Bisnis" << endl;
    } else if (nomor == 3) {
        cout << "tiket yang dibeli : Tiket Eksekutif" << endl;
    }
    cout << "total harga tiket: Rp. " << totalHarga << endl;

    return 0;
}


