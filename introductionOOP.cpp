#include <iostream>
using namespace std;

class Mahasiswa {
    public:
         int nim;
         string nama;
         float nilai;
        
            void PrintData() {
                cout << "NIM: " << nim << endl;
                cout << "Nama: " << nama << endl;
                cout << "Nilai: " << nilai << endl;
            }
};//batas class

int main() {//objek
    Mahasiswa mhs1;
        mhs1.nim = 2022;
        mhs1.nama = "Abra";
        mhs1.nilai = 90.5;

    mhs1.PrintData();

}
