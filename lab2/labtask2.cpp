#include <iostream>
using namespace std;

void FirstAndLastIndex(const string text, char ch, int &fi, int &si){
    fi = -1;
    si = -1;

    for (int i = 0; i < text.length(); i++){
        if(text[i] == ch){
            if(fi == -1){
                fi = i;
            }
            si = i;
        }
    }
}

int main(){
    string text;
    char ch;
    int fi, si;

    cout << "Enter a string: ";
    cin >> text;
    cout << "Enter a char to find: ";
    cin >> ch;

    FirstAndLastIndex(text, ch, fi, si);

    if(fi == -1){
        cout << "Character not found in the string." << endl;
    } else {
        cout << "First occurrence at index: " << fi << endl;
        cout << "Last occurrence at index: " << si << endl;
    }
}
