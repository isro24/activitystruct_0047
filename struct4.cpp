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
    Mahasiswa mhs [3];
    for (int i=0;i<3;i++){
        cout << "Data ke- " <<(i+1)<< ":" << endl;
        cout << "Nomor Induk Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "Alamat : " << endl;
        cout << "\t Nama Kota : ";
        cin >> mhs[i].alamat.kota;
        cout << "\t Nama Desa : ";
        cin >> mhs[i].alamat.desa;
    
        cout << "Umur Mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }