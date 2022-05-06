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
    mahasiswa mhs[5];
    int i,x;
    for(i = 0; i<5; i++){
        cout << "Masukkan Data Mahasiswa ke -"<<i+1<<""<<endl;
        cout <<"Masukkan NIM : ";
        cin>>mhs[i].nim;
        cout <<"Masukkan Nama : ";
        cin>>mhs[i].nama;
        cout <<"Masukkan No Rumah : ";
        cin>>mhs[i].alamat.nomorRumah;
        cout <<"Masukkan Nama Jalan : ";
        cin>>mhs[i].alamat.namaJalan;
        cout <<"Masukkan Nama Kota : ";
        cin>>mhs[i].alamat.kota;
        cout <<"Masukkan Nama Provinsi : ";
        cin>>mhs[i].alamat.provinsi;
        cout <<"Masukkan Tempat : ";
        cin>>mhs[i].tempat;
        cout <<"Masukkan Tanggal Lahir : ";
        cin>>mhs[i].tanggalLahir.tanggal;
        cout <<"Masukkan Bulan Lahir : ";
        cin>>mhs[i].tanggalLahir.bulan;
        cout <<"Masukkan Tahun Lahir : ";
        cin>>mhs[i].tanggalLahir.tahun;
        cout <<endl;
    }

    cout<< "-- Daftar data mahasiswa --" <<endl;

    for(x = 0; x<5; x++){
        cout << "Data mahasiswa ke -"<<x+1<<""<<endl;
        cout << "Nim :"<< mhs[x].nim <<endl;
        cout << "Nama :"<< mhs[x].nama <<endl;
        cout << "-- Alamat --" << endl;
        cout << "No Rumah : "<<mhs[x].alamat.nomorRumah <<endl;
        cout << "Jalan : "<<mhs[x].alamat.namaJalan <<endl;
        cout << "Kota : "<<mhs[x].alamat.kota <<endl;
        cout << "Provinsi : "<<mhs[x].alamat.provinsi <<endl;
        cout << "Tempat : "<<mhs[x].tempat <<endl;
        cout << "Tanggal Lahir :" <<""<<mhs[x].tanggalLahir.tanggal <<
        "-"<< mhs[x].tanggalLahir.tanggal<<"-" <<mhs[x].tanggalLahir.tahun<<""<<endl;
        cout<<endl;
    };  
    getch();
}


