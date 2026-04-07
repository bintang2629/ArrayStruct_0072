#include <iostream>
using namespace std;

struct orang{
    string nama;
    string alama;
    int umur;
};

int main()
{
    //deklarasi obyek dari struct orang 
    orang mhs;
    //isi objek
cout << "Nama Mahasiswa:";
cin >> mhs.nama;
cout << "Alamat Asal:";
cin >> mhs.alamat;
cout << "Umur Mahasiswa:";
cin >> mhs.umur;
cout << endl;
//manampilkan isi objek
cout << "Nama : " << mhs.nama << endl;
cout << "Alamat : " << mhs.alamat << endl;
cout << "Umur : " << mhs.umur << endl;

}

