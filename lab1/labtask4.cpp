#include <iostream>
using namespace std;

int main() {
    int size, fa[100], sa[100], temp;
    cout << "Enter size of an array: ";
    cin >> size;

    cout << "Enter " << size << " elements for the first array: ";
    for (int i = 0; i < size; i++) cin >> fa[i];

    cout << "Enter " << size << " elements for the second array: ";
    for (int i = 0; i < size; i++) cin >> sa[i];

    for (int i = 0; i < size; i++) {
        temp = fa[i];
        fa[i] = sa[i];
        sa[i] = temp;
    }

    cout << "\nArrays after swapping:\n";
    cout << "First array: ";
    for (int i = 0; i < size; i++) cout << fa[i] << " ";
    cout << "\nSecond array: ";
    for (int i = 0; i < size; i++) cout << sa[i] << " ";
    cout << "\n\n";

    int largest = fa[0];
    for (int i = 1; i < size; i++) {
        if (fa[i] > largest) largest = fa[i];
    }
    cout << "Largest element in first array (after swapping): " << largest << endl;

    int first = -1e9, second = -1e9;
    for (int i = 0; i < size; i++) {
        if (sa[i] > first) {
            second = first;
            first = sa[i];
        } else if (sa[i] > second && sa[i] != first) {
            second = sa[i];
        }
    }
    cout << "Second largest element in second array (after swapping): " << second << endl;

    for (int i = 0; i < size; i++) {
        bool unique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && fa[i] == fa[j]) {
                unique = false;
                break;
            }
        }
        if (unique) {
            cout << "Unique element in first array (after swapping): " << fa[i] << endl;
            break;
        }
    }

    return 0;
}
