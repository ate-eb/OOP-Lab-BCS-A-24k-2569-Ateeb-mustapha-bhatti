#include <iostream>
#include <string>
using namespace std;

class OrderDetails {
private:
    int orderID;
    string itemName;
    const double deliveryFee;

public:
    OrderDetails(int orderID, const string &itemName, double deliveryFee)
      : deliveryFee(deliveryFee)
    {
        this->orderID = orderID;
        this->itemName = itemName;
        cout << "OrderDetails created: orderID = " << this->orderID
             << ", itemName = " << this->itemName
             << ", deliveryFee = " << this->deliveryFee
             << endl;
    }

    ~OrderDetails() {
        cout << "Order " << orderID
             << " is being archived and memory cleared." << endl;
    }

    void show() const {
        cout << "OrderID: " << orderID
             << ", Item: " << itemName
             << ", Delivery Fee: " << deliveryFee
             << endl;
    }
};

int main() {
    {
        OrderDetails o(12345, "Wireless Mouse", 250.75);
        o.show();
    }
    return 0;
}
