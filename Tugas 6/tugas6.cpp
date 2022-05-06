#include <iostream>
#include <string>
#include <string.h>

using namespace std;
void tambah();
void tahunKelahiran();
void jenisKelamin();
void edit();
char kembali;
int pilih;
int jmlh = 0;
typedef struct
{
 int tgl;
 int bln;
 int th;
}Tanggal;

typedef struct
{
 char noID[5];
 char nama[30];
 char jenis_kelamin; //’L’ atau ‘P’
 Tanggal t;
}KTP;

typedef struct
{
 KTP ktp[10];
 int jml;
}Data_KTP;

Data_KTP data_ktp;
Data_KTP *p = &data_ktp;
KTP data_temp_ktp[10];

int main(){     
    do{
        cout<<"<<------------MENU----------->>";
            cout<<"\n 1. Menambah data ";
            cout<<"\n 2. Mencari data berdasarkan tahun kelahiran tertentu ";
            cout<<"\n 3. Menampilkan data berdasarkan L dan P ";
            cout<<"\n 4. Mengedit data ";
            cout<<"\nPilih : "; cin>>pilih;
        
        switch (pilih)
        {
            case 1:
                    tambah();
                    break;
            case 2:
                    tahunKelahiran();
                    break;
            case 3:
                    jenisKelamin();
                    break;
            case 4:
                    edit();
                    break;
            default:
                break;
        }
        cout <<"Kembali ke Menu? (Y?N)";cin>>kembali;
    }while (kembali=='Y'||kembali=='y');  
}

void tambah(){  
    p -> jml = 0;
    KTP *p_ktp = p -> ktp;
    cout<<"Tambah data ke - "<<jmlh +1<<endl;
    cin.ignore(); 
    cout<< "No ID    : ";
    cin.getline(data_temp_ktp[jmlh].noID,sizeof(data_temp_ktp[jmlh].noID)); 
    cout<< "Nama    : ";
    cin.getline(data_temp_ktp[jmlh].nama,sizeof(data_temp_ktp[jmlh].nama)); 
    cout<< "Jenis Kelamin (L/P) : ";
    cin >> data_temp_ktp[jmlh].jenis_kelamin;
    cout<< "Tanggal Lahir : ";
    cin>>data_temp_ktp[jmlh].t.tgl;
    cout<< "Bulan Lahir : ";
    cin>>data_temp_ktp[jmlh].t.bln;
    cout<< "Tahun Lahir : ";
    cin>>data_temp_ktp[jmlh].t.th;\
    jmlh++;
 
    for (int i = 0; i < jmlh; i++)
    {
        *p_ktp = data_temp_ktp[i];
        p ->jml++;
        p_ktp ++;
    }
    
    cout << endl <<endl;
            cout <<"berhasil ";

}
void tahunKelahiran(){
    KTP *p_ktp = p -> ktp;
    p_ktp = p ->ktp;
    int input_Tahun;
    int jml_data_ditemukan = 0;
    cout<< "Masukkan Tahun Kelahiran : ";
    cin>>input_Tahun;
    cout<<"|-----------Data hasil pencarian berdasarkan tahun Kelahiran------|"<<endl;
    for( int i = 0;i < p->jml;i++){
        if(input_Tahun == p_ktp[i].t.th){
            jml_data_ditemukan ++;
            cout<<"<------------- DATA KTP---------------->"<<endl;
            cout<<"no id  : "<<p_ktp[i].noID<<endl;
            cout<<"nama  : "<<p_ktp[i].nama<<endl;
            cout<<"jenis Kelamin : "<<p_ktp[i].jenis_kelamin<<endl;
            cout<<"tgl lahir : "<<p_ktp[i].t.tgl<<endl;
            cout<<"bulan lahir : "<<p_ktp[i].t.bln<<endl;
            cout<<"tahun lahir : "<<p_ktp[i].t.th<<endl;
            cout<<"<--------------||---------------->"<<endl;   
        }    
    }
    if(jml_data_ditemukan == 0){
        cout << "Data Tidak ditemukan" <<endl;
    }else{
        cout << "Data KTP yang ditemukan sebanyak : " <<jml_data_ditemukan<<endl;
    }
}
void jenisKelamin(){
    KTP *p_ktp = p -> ktp;
    p_ktp = p ->ktp;
    int jml_data_ditemukan = 0;
    char input_jenis_kelamin;
    cout<< "Masukkan Jenis Kelamin yang ingin di cari (L?P) : ";   
    cin>>input_jenis_kelamin;
    cin.ignore();  
    cout<<"|-----------Data hasil pencarian berdasarkan jenis kelamin------|"<<endl;
    for( int i = 0;i<p->jml;i++){
        if(input_jenis_kelamin == p_ktp[i].jenis_kelamin){
            jml_data_ditemukan ++;
            cout<<"<------------- DATA KTP---------------->"<<endl;
            cout<<"no id  : "<<p_ktp[i].noID<<endl;
            cout<<"nama  : "<<p_ktp[i].nama<<endl;
            cout<<"jenis Kelamin : "<<p_ktp[i].jenis_kelamin<<endl;
            cout<<"tgl lahir : "<<p_ktp[i].t.tgl<<endl;
            cout<<"bulan lahir : "<<p_ktp[i].t.bln<<endl;
            cout<<"tahun lahir : "<<p_ktp[i].t.th<<endl;
            cout<<"<--------------||---------------->"<<endl;   
        }    
    }
    if(jml_data_ditemukan == 0){
        cout << "Data Tidak ditemukan" <<endl;
    }else{
        cout << "Data KTP yang ditemukan sebanyak : " <<jml_data_ditemukan<<endl;
    }
}
void edit(){
    char no_id_input[5];
    KTP *p_ktp = p -> ktp;
    p_ktp = p ->ktp;

    int jml_data_ditemukan = 0;
    cout<< "Masukkan No Id Yang mau Di edit : ";
    cin>>no_id_input;
    
    for( int i = 0;i <p->jml;i++){
        if(strcmp(no_id_input,p_ktp[i].noID) == 0){
            jml_data_ditemukan ++;
            cout<<"<------------- DATA KTP Sebelumnya---------------->"<<endl;
            cout<<"no id  : "<<p_ktp[i].noID<<endl;
            cout<<"nama  : "<<p_ktp[i].nama<<endl;
            cout<<"jenis Kelamin : "<<p_ktp[i].jenis_kelamin<<endl;
            cout<<"tgl lahir : "<<p_ktp[i].t.tgl<<endl;
            cout<<"bulan lahir : "<<p_ktp[i].t.bln<<endl;
            cout<<"tahun lahir : "<<p_ktp[i].t.th<<endl;
            cout<<"<--------------||---------------->"<<endl;   
            cout<<"<------Silahkan Ubah Data------>"<<endl;
            cin.ignore(); 
            cout<< "No ID yang di ubah   : ";
            cin.getline(p_ktp[i].noID,sizeof(p_ktp[i].noID)); 
            cout<< "Nama yang di ubah   : ";
            cin.getline(p_ktp[i].nama,sizeof(p_ktp[i].nama)); 
            cout<< "Jenis Kelamin (L/P) yang diubah : ";
            cin >> p_ktp[i].jenis_kelamin;
            cout<< "Tanggal Lahir yang diubah : ";
            cin>>p_ktp[i].t.tgl;
            cout<< "Bulan Lahir yang diubah : ";
            cin>>p_ktp[i].t.bln;
            cout<< "Tahun Lahir yang diubah: ";
            cin>>p_ktp[i].t.th;
            cout<<"<--------Data Berhasil Di Ubah----------->"<<endl;
        }    
    }
    if(jml_data_ditemukan == 0){
        cout << "Data yang mau diubah tidak ditemukan" <<endl;
    }
}