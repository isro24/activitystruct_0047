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

    cout << "Alamat : " << endl;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;

    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\nNIM : " << mhs.nim;
    cout << "\nNama : " << mhs.nama;
    cout << "\nAlamat :";
    cout << "\n\t Kota : " << mhs.alamat.kota;
    cout << "\n\t Desa : " << mhs.alamat.desa;
    cout << "\nUmur : " << mhs.umur;
};