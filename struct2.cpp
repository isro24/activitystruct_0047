#include <iostream>
using namespace std;


struct DetailAlamat{
    string kota;
    string desa;
};

struct Mahasiswa{
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main (){
    Mahasiswa mhs;
    cout << "Nomor Induk Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
