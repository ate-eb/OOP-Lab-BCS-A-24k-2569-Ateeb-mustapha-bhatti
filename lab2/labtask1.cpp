// Task #01 by Abdul Moiz - 25k-0770
#include <iostream>
using namespace std;

void swapValues(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int a, b;
    cout << "Enter ptr1: ";
    cin >> a;
    cout << "Enter ptr2: ";
    cin >> b;

    swapValues(&a, &b);

    cout << "ptr1: " << a << endl;
    cout << "ptr2: " << b << endl;
}
