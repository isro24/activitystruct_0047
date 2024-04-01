#include <istream>
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
    getline(cin, mhs.nim);
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);

    
    cout << "Alamat : " << endl;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
