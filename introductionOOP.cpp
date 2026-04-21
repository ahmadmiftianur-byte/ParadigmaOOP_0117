#include <iostream>
using namespace std;

class Mahasiswa {
    public:
         int nim;
         string nama;
         float nilai;
        
            void tampilkanData() {
                cout << "NIM: " << nim << endl;
                cout << "Nama: " << nama << endl;
                cout << "Nilai: " << nilai << endl;
            }
};