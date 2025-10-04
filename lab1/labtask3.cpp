#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= n / 2; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void findPrimesInRange(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;

    findPrimesInRange(start, end);

    return 0;
}
