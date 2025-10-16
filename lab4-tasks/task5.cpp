#include <iostream>
#include <string>
using namespace std;

class CurrencyExchange {
private:
    const double PKR_to_USD_Rate;
    string &branchName;
    int totalTransactions;

public:
    CurrencyExchange(double rate, string &branch, int initialCount)
      : PKR_to_USD_Rate(rate),
        branchName(branch),
        totalTransactions(initialCount)
    {
    }

    double convertPKRtoUSD(double pkrAmount) {
        ++totalTransactions;
        return pkrAmount * PKR_to_USD_Rate;
    }

    int getTotalTransactions() const {
        return totalTransactions;
    }

    void showInfo() const {
        cout << "Branch: " << branchName
             << " | Rate: " << PKR_to_USD_Rate
             << " | Total txns: " << totalTransactions
             << endl;
    }
};

int main() {
    string name = "Karachi Main Branch";
    CurrencyExchange exch(0.0031, name, 0);

    exch.showInfo();

    double pkr = 100000.0;
    double usd = exch.convertPKRtoUSD(pkr);
    cout << pkr << " PKR -> " << usd << " USD" << endl;

    exch.showInfo();

    usd = exch.convertPKRtoUSD(50000.0);
    cout << "50000 PKR -> " << usd << " USD" << endl;

    exch.showInfo();

    return 0;
}
