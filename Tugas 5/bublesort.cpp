#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

int main(){
  int array[100], n, i, j;
  cout << "Masukkan banyak data: ";
  cin >> n;
  cout << "Masukkan nilai: \n";
  for (i = 0; i < n; i++){
    cout << "Masukkan data ke -"<<i+1 <<" :";
    cin >> array[i];
  } 
  bubbleSort(array, n);
  cout << endl;
  cout << "Hasil Pengurutan Data"<< endl;
  for (i = 0; i < n; i++){
    cout << array[i] << " ";
  }
}