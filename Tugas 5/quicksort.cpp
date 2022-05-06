#include <iostream>
using namespace std;

void tukar(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;  
            tukar(&arr[i], &arr[j]); 
        } 
    } 
    tukar(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pivot = partition(arr, low, high); 
   
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void tampilkanArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   
int main() 
{ 
    int n, arr[100];
    cout << "Masukkan jumlah data: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i+1  << " = " ;
        cin >> arr[i];
    }
    cout<<"Data Array sebelum di sort"<<endl;
    tampilkanArray(arr,n);
    cout<<endl;
    quickSort(arr, 0, n-1); 
    cout<<"Data Array sesudah di sort"<<endl; 
    tampilkanArray(arr,n); 
    return 0; 
}