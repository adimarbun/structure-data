#include <iostream>
using namespace std;
 
int main()
{
    int data[5], n, i, pos;
    i=0;
    cout << "Masukkan 5 data" << endl;
    while(i<=4)
    {
        cout<<"Masukkan data ke "<<i+1<<" :";
        cin>>data[i];
        i++;
        
    }
    pos = 0;
    cout<<"Masukkan data yang di cari :";
    cin>>n;
    i=0;
    while(i<=5)
    {     
        if(n==data[i])
        {        
            pos=i+1;
            break;    
        }
        i++;      
    }
    if(pos==0)
        cout<<"Data tidak ditemukan"<<endl;
    else
        cout<<"Data ditemukan berada di posisi "<<pos<<endl;
}
