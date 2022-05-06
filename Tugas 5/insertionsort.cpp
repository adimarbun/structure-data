#include <iostream>
using namespace std;

int main()
{
    int i,n,j,temp;
    char A[100];
    cout << "Insetion ascending\n";
    cout << "Jumlah data : ";
    cin >> n;
    cout << endl;
    for (i = 0; i < n; i++){
        cout << "Data ke - " << i+1 << " : ";
        cin >> A[i];
    }

    for(i = 0; i < n; i++){
        temp = A[i];
        j = i-1;
        while(A[j] > temp && j >= 0){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
    cout << "Data Setelah Di Urutkan : \n";
    for(i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    return 0;
}