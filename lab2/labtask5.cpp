#include <iostream>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    string s3 = s1 + s2;

    cout << "\nFirst string: " << s1 << endl;
    cout << "Second string: " << s2 << endl;
    cout << "Concatenated string: " << s3 << endl;

    return 0;
}
