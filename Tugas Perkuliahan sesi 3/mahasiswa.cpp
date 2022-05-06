#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct alamat
{
    string namaJalan;
    int nomorRumah;
    string kota;
    string provinsi; 
};

struct tanggalLahir
{
    int tanggal;
    int bulan;
    int tahun;
};

struct mahasiswa
{
    string nim;
    string nama;
    alamat alamat;
    string tempat;
    tanggalLahir tanggalLahir;
};

int main(){
    mahasiswa mhs;
    cout <<"Masukkan NIM : ";
    cin>>mhs.nim;
    cout <<"Masukkan Nama : ";
    cin>>mhs.nama;
    cout <<"Masukkan No Rumah : ";
    cin>>mhs.alamat.nomorRumah;
    cout <<"Masukkan Nama Jalan : ";
    cin>>mhs.alamat.namaJalan;
    cout <<"Masukkan Nama Kota : ";
    cin>>mhs.alamat.kota;
    cout <<"Masukkan Nama Provinsi : ";
    cin>>mhs.alamat.provinsi;
    cout <<"Masukkan Nama Tempat : ";
    cin>>mhs.tempat;
    cout <<"Masukkan Tanggal Lahir : ";
    cin>>mhs.tanggalLahir.tanggal;
    cout <<"Masukkan Bulan Lahir : ";
    cin>>mhs.tanggalLahir.bulan;
    cout <<"Masukkan Bulan Lahir : ";
    cin>>mhs.tanggalLahir.tahun;
    cout<<endl;

    cout << "Data mahasiswa :"<<endl;
    cout << "Nim :"<< mhs.nim <<endl;
    cout << "Nama :"<< mhs.nama <<endl;
    cout << "--Alamat --" << endl;
    cout << "No Rumah : "<<mhs.alamat.nomorRumah <<endl;
    cout << "Jalan : "<<mhs.alamat.namaJalan <<endl;
    cout << "Kota : "<<mhs.alamat.kota <<endl;
    cout << "Provinsi : "<<mhs.alamat.provinsi <<endl;
    cout << "Tempat : "<<mhs.tempat <<endl;
    cout << "Tanggal Lahir :" <<""<<mhs.tanggalLahir.tanggal <<
        "-"<< mhs.tanggalLahir.tanggal<<"-" <<mhs.tanggalLahir.tahun<<""<<endl;
    getch();
}


