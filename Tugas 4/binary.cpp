#include <iostream>
using namespace std;
 
int main()
{
    int data[10]={5,6,9,16,46,69,80,120,286,300};
    int location, number, i, mid, start=0,end=9;
    location=0;

    cout<<" Maukkan data yang di cari: ";
    cin>>number;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(number==data[mid])
        {
            location= mid+1;
            break;         
        }
        else if(number<data[mid]){
            end=mid-1;
        }else{
            start=mid+1;  
        }
              
    }
    if(location==0){
        cout<<"Data tidak ditemukan"<<endl;
    }else{
        cout<<"Data ditemukan di posisi = "<<location<<endl;
    }        
}