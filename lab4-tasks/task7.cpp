#include <iostream>
#include <string>
using namespace std;

class SecureBankAccount {
private:
    int accountNumber;
    double balance;
    const string accountType;
    int *logHistory;

public:
    SecureBankAccount(int accountNumber, double initialBalance, const string &accountType, int initialLogSize)
      : accountType(accountType)
    {
        this->accountNumber = accountNumber;
        this->balance = initialBalance;
        if (initialBalance < 500.0) {
            cout << "Error: initial balance (" << initialBalance << " PKR) is below minimum required (500 PKR)." << endl;
        }
        logHistory = new int;
        *logHistory = initialLogSize;
        cout << "SecureBankAccount created: accountNumber = " << this->accountNumber
             << ", balance = " << this->balance
             << ", accountType = " << this->accountType
             << ", logHistory = " << *logHistory
             << endl;
    }

    SecureBankAccount(const SecureBankAccount &src)
      : accountType(src.accountType)
    {
        this->accountNumber = src.accountNumber;
        this->balance = src.balance;
        logHistory = new int;
        *logHistory = *(src.logHistory);
        cout << "SecureBankAccount deep-copied: accountNumber = " << this->accountNumber
             << ", balance = " << this->balance
             << ", accountType = " << this->accountType
             << ", logHistory = " << *logHistory
             << endl;
    }

    ~SecureBankAccount() {
        cout << "Destroying SecureBankAccount: accountNumber = " << accountNumber
             << ", releasing logHistory memory (was " << (logHistory ? *logHistory : 0) << ")" << endl;
        delete logHistory;
    }

    void show() const {
        cout << "AccountNumber: " << accountNumber
             << ", balance: " << balance
             << ", accountType: " << accountType
             << ", logHistory = " << (logHistory ? *logHistory : 0)
             << ", address = " << logHistory
             << endl;
    }

    void addLogEntry() {
        if (logHistory) {
            (*logHistory)++;
        }
    }
};

int main() {
    {
        SecureBankAccount a1(10001, 300.0, "Current", 5);
        a1.show();

        SecureBankAccount a2 = a1;
        a2.show();

        cout << "\nAdding log entry to a1...\n";
        a1.addLogEntry();
        a1.show();
        a2.show();

        cout << "\nEnd of block, destructors will run for a2 then a1\n";
    }
    cout << "After block, all accounts destroyed.\n";
    return 0;
}
