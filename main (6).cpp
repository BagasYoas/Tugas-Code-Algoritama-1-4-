/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Character {
private:
    string name;
    string type;
    int level;
    int exp;
    int maxLevel;
    bool enteredRuangGoblin;
    bool tampilanHobGoblin;
    bool tampilanGoblinKnight;
    bool tampilanRajaGoblin;

public:
    Character(string n, string t) : name(n), type(t), level(1), exp(0), maxLevel(10), enteredRuangGoblin(false),
    tampilanHobGoblin(false), tampilanGoblinKnight(false), tampilanRajaGoblin(false) {}

     void attackEnemy() {
        if (level <= 3) {
            exp += 50;
            cout << "\nkamu berhasil mengalahkan Lawan! +50 Exp\n" << endl;
        } else if (level <= 6) {
            exp += 75;
            cout << "\nkamu berhasil mengalahkan Lawan! +75 Exp\n" << endl;
        } else if (level <= 9) {
            exp += 100;
            cout << "\nkamu berhasil mengalahkan Lawan! +100 Exp\n" << endl;
        } else {
            cout << "kamu berhasil mengalahkan King goblin \n\nAnda mendapatkan Title Goblin Slayer\n\nsilahkan tekan tombol 3 untuk keluar" << endl;
        }
        
        checkLevelUp();
    }

    void checkLevelUp() {
        if (exp >= 100 && level <= maxLevel) {
            exp -= 100 * level; 
            ++level;
            cout << "\nlevel up! kamu sekarang level " << level << endl;
        }
        
        if (level >= 4 || level <= 10 && !enteredRuangGoblin) {
            enteredRuangGoblin = true;
            checkRuangGoblin();
        }
       
    }
    
    
    void checkRuangGoblin() {
        if (level == 4 && !tampilanHobGoblin) {
            tampilanHobGoblin = true;
            cout << "\nkamu telah memasuki Ruang hobgoblin !!" << endl;
        }else if (level == 7 && !tampilanGoblinKnight) {
            tampilanGoblinKnight = true;
            cout << "\nkamu telah memasuki Ruang goblin knight !!" << endl;
        }else if (level == 10 && !tampilanRajaGoblin) {
            tampilanRajaGoblin = true;
            cout << "\nkamu telah memasuki Ruang raja goblin !!" << endl;
        }
    }
    
    
    int getLevel() const {
        return level;
        
        
    }
    
     int checkLevel(int level) {
        if (level <= 3) {
            return 1;
        } else if (level <= 6) {
            return 2;
        } else if (level <= 9) {
            return 3;
        } else {
            return 4;
        }
    }

};

class monster {
private:
    string name;
    string type;
    int level;
    
public:
    monster (string n, string t) : name(n), type(t), level(1) {}
    
};

int main () {
    
    string a;
    cout << "masukkan nickname anda : ";
    cin >> a;
    
    string characterTypes[] = {"Ksatria", "Pemanah", "Penyihir", "Keluar"};

    cout << "selamat datang di game 'Goblin Slayer'" << endl;
    cout << "Pilih karakter:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << characterTypes[i] << endl;
    }
    
    int choice;
    cout << "Masukkan pilihan karakter (1/2/3/4): ";
    cin >> choice; cout << endl;
    
    if (choice == 1) {
        cout << "anda pilih ksatria level 1" << endl;
    }else if (choice == 2) {
        cout << "anda pilih pemanah level 1" << endl;
    }else if (choice == 3) {
        cout << "anda pilih penyihir level 1" << endl;
    }

    if (choice < 1 || choice > 4) {
        cout << "Pilihan tidak valid!" << endl;
        return 1;
    }

     if (choice == 4) {
        cout << "\nKeluar dari permainan." << endl;
        return 0;
    }

    Character player("Player", characterTypes[choice - 1]);

    cout << endl;

string monsterTypes[] = {"goblin", "hobgoblin", "goblin knight", "king goblin"};
    ceklevel:
    menuUtama:
    cout << "Pilih ruang yang ingin kamu masuki" << endl;
    cout << "1. Ruang goblin (level 1 - 3) " << endl;
    cout << "2. Ruang hobgoblin (level 4 - 6) " << endl;
    cout << "3. Ruang goblin knight (level 7 - 9) " << endl;
    cout << "4. Ruang raja goblin (level 10) " << endl;
    
    
     int MC;
    cout << "Masukkan pilihan Anda (1/2/3/4): ";
    cin >> MC; cout << endl;
    
    
    int checkLevel = player.checkLevel(player.getLevel());
    

    if (MC == 1 && checkLevel == 1) {
        cout << "kamu telah memasuki ruang goblin " << endl;
    } else if (MC == 2 && checkLevel == 2) {
        cout << "kamu telah memasuki Ruang hobgoblin" << endl;
    } else if (MC == 3 && checkLevel == 3) {
        cout << "kamu telah memasuki Ruang goblin knight" << endl;
    } else if (MC == 4 && checkLevel == 4) {
        cout << "kamu telah memasuki Ruang raja goblin" << endl;
    } else {
        cout << "Level anda tidak memenuhi syarat untuk memasuki ruang tersebut.\n" << endl;
        goto ceklevel;
        // Add logic to handle this situation (e.g., return to the selection process)
    }

    if (choice < 1 || choice > 4) {
        cout << "Pilihan tidak valid!" << endl;
        return 1;
    }
    
   
 while (true) {
        cout << "\nOpsi:" << endl;
        cout << "1. Serang " << endl;
        cout << "2. kembali ke menu utama" << endl;
        cout << "3. Keluar" << endl;

        int action;
        cout << "Masukkan pilihan aksi (1/2/3): ";
        cin >> action;

        switch (action) {
            case 1:
                player.attackEnemy();
                break;
            case 2:
                goto menuUtama;
                break;
            case 3:
                cout << "Keluar dari permainan." << endl;
                return 0;
                
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }
    }

    return 0;
}







