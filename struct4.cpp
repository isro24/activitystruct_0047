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
        for (int i=0;i<3;i++){
        cout << endl;
        cout << "Data Mahasiswa ke-"<< (i+1)<< ";" ;
        cout << "\nNIM : " << mhs[i].nim;
        cout << "\nNama : " << mhs[i].nama;
        cout << "\nAlamat :";
        cout << "\n\tKota : " << mhs[i].alamat.kota;
        cout << "\n\tDesa : " << mhs[i].alamat.desa;
        cout << "\nUmur : " << mhs[i].umur;
        cout << endl;
    }
};