#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct karyawan
{
    char nama[10];
    int totalJamKerja;
    int jamNormal ;
    int jamLembur = 0;
    int gajiNormal;
    int gajiLembur = 0;
    int totalGaji;
};

int main()
{
    int gajiPerjam = 50000;
    int gajiLemburPerJam = 15 * gajiPerjam;
    karyawan kry;
    cout <<"Masukkan Nama Karyawan : ";
    cin>>kry.nama;
    cout <<"Masukkan Total Jam Kerja : ";
    cin>> kry.totalJamKerja;

    if(kry.totalJamKerja > 7){
        kry.jamLembur = kry.totalJamKerja - 7;
        kry.gajiLembur = kry.jamLembur*gajiLemburPerJam;
        kry.jamNormal = 7;
        kry.gajiNormal = kry.jamNormal * gajiPerjam;

    }else{
        kry.jamNormal = kry.totalJamKerja;
        kry.gajiNormal = kry.totalJamKerja * gajiPerjam;      
    }
    kry.totalGaji = kry.gajiNormal + kry.gajiLembur;

    cout << "Nama Karyawan = "<< kry.nama << endl;
    cout << "Total Jam Kerja = " << kry.totalJamKerja << endl;
    cout << "Jam Normal = " << kry.jamNormal << endl;
    cout << "Jam Lembur = " << kry.jamLembur << endl;
    cout << "Total gaji normal = Rp." << kry.gajiNormal << endl;
    cout << "Total gaji lembur = Rp." << kry.gajiLembur << endl;
    cout << "Total gaji yang di dapat = Rp." << kry.totalGaji << endl;
    getch();
}



