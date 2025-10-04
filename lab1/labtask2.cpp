#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter number of Rows: ";
    cin >> a;
    int al = 65;

    for(int i = 1; i <= a; i++){
        int num = 0;

        for(int j = i; j < a; j++){
            cout << " ";
        }

        for(int j = 1; j <= i; j++){
            cout << (char)(al + num++);
        }

        for(int j = 1; j < i; j++){
            cout << (char)(al + num++);
        }

        cout << endl;
    }

    for(int i = 1; i < a; i++){
        int num = 0;

        for(int j = 1; j <= i; j++){
            cout << " ";
        }

        for(int j = i; j < a; j++){
            cout << (char)(al + num++);
        }

        for(int j = i; j < a-1; j++){
            cout << (char)(al + num++);
        }

        cout<< endl;
    }
}
