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
     int a, b;
    
    cout << "masukan bilangan ganjil: ";
    cin >> a;
    
    cout << "masukan bilangan genap: ";
    cin >> b;
    
    if(a % 2!= 0 && b % 2 ==0){// tanda % (sisa bagi) != (tidak sama dengan), == (sama dengan), && (logika AND), || (logika OR), ! (nagasi)
    // arti logikanya yaitu a = sisa bagi 2 tidak sama dengan 0 yang arinya GANJIL. logika AND.
    // b = sisa bagi 2 sama dengan 0 yang artinya GENAP. 
    //(logika AND artinya jika 22nya true hasilnya true, jika salah satunya false dan 22nya false maka hasilnya false)
        cout << endl << "benar, ini bilangan ganjil dan genap"<< endl;  
    }else {
        cout << "dia bukan bilangan ganjil dan genap" << endl;
    }
    

    return 0;
}
