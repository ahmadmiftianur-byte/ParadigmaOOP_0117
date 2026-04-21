#include <iostream>
using namespace std;

class Barang {
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggal_produksi;


        void PrintData() {
            cout << "Nama Barang: " << nama << endl;
            cout << "Jumlah: " << jumlah << endl;
            cout << "Kategori: " << kategori << endl;
            cout << "Tanggal Produksi: " << tanggal_produksi << endl;
        }
};//batas class

int main() {//make 2 objek
    Barang eletronik;
    Barang nonelektronik;

    eletronik.nama = "Laptop";
    eletronik.jumlah = 1;
    eletronik.kategori = "Elektronik";
    eletronik.tanggal_produksi = "1945-08-17";

    cout << endl;

    nonelektronik.nama = "Buku";
    nonelektronik.jumlah = 1;
    nonelektronik.kategori = "Non-Elektronik";
    nonelektronik.tanggal_produksi = "2023-02-01";

    eletronik.PrintData();
    nonelektronik.PrintData();

}