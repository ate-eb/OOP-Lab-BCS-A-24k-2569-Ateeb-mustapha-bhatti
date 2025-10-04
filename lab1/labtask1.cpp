#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter an amount in Rs = ";
    cin >> amount;
    cout << endl;

    int denominations[] = {5000, 1000, 500, 100, 20, 10, 5, 2, 1};
    int n = sizeof(denominations) / sizeof(denominations[0]);

    cout << "Minimum notes required for Rs. " << amount << " are:" << endl;

    for (int i = 0; i < n; i++) {
        if (amount >= denominations[i]) {
            int count = amount / denominations[i];
            amount %= denominations[i];
            cout << denominations[i] << " x " << count << endl;
        }
    }

    return 0;
}
