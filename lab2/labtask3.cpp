#include <iostream>
using namespace std;

int sumArray(int* size, int* arr){
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += (*arr + 1);
    return sum;
}

int main(){
    int n;
     cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter" << n << " Elements : ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
  cout << "Sum of elements : " << sumArray(arr, n);
}
