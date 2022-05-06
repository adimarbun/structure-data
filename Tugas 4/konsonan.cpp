#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char data[100];
    char vokal[100];
    char konsonan[100];
    char numerik[100];
    int lengthData,vokalLength = 0,konsonanLength = 0,numerikLength = 0;
    cout << "Input : ";
    scanf("%[^\n]s",data);
    lengthData=strlen(data);
    int i = 0;
    while(i < lengthData){
        char c = data[i];
        if(isalpha(c)){
          if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){    
                vokal[vokalLength] = c;
                vokalLength++;
          }else{
              konsonan[konsonanLength] = c;
              konsonanLength++;
              
          }
        }else if(isdigit(c)){
            numerik[numerikLength] = c;
            numerikLength++;     
        }

        i++;
    }

    cout<<"output :" << endl;
    cout<<"Vokal = " << vokalLength << " = ";
    for(int a = 0;a < vokalLength;a++){
        cout << vokal[a] << " " ;
    };
    cout <<endl;
    cout<<"Konsonan = " << konsonanLength << " = ";
    for(int b = 0;b < konsonanLength;b++){
        cout << konsonan[b] << " " ;
    };
    cout << endl;

    char s;
    int sLength = 0;
    cout << "masukkan data yang akan anda cari :";
    cin >> s;
    for(int d =0;d<lengthData ;d++){
        if(data[d] == s){
            if(sLength == 0){
                cout<< "Data ditemukan di posisi ke : ";
            }
            cout<<d+1 <<" ";
            sLength ++;
        }
    }
    if(sLength == 0) cout<<"Data tidak ada ...";
}