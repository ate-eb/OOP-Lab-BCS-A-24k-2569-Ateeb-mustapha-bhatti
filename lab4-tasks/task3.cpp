#include <iostream>
using namespace std;

class PropertyDeed {
private:
    int *ownerID;

public:
    PropertyDeed(int id) {
        ownerID = new int;
        *ownerID = id;
    }

    PropertyDeed(const PropertyDeed &src, bool shallow) {
        if (shallow) {
            ownerID = src.ownerID;
        } else {
            ownerID = new int;
            *ownerID = *src.ownerID;
        }
    }

    PropertyDeed(const PropertyDeed &src) {
        ownerID = new int;
        *ownerID = *src.ownerID;
    }

    ~PropertyDeed() {
        delete ownerID;
    }

    void setOwnerID(int newID) {
        *ownerID = newID;
    }

    int getOwnerID() const {
        return *ownerID;
    }

    void display(const char *label = "") const {
        cout << label
             << " ownerID value = " << *ownerID
             << ", pointer address = " << ownerID
             << endl;
    }
};

int main() {
    PropertyDeed orig(1001);
    orig.display("orig:");

    PropertyDeed shallowCopy(orig, true);
    shallowCopy.display("shallowCopy (after copy):");

    PropertyDeed deepCopy(orig);
    deepCopy.display("deepCopy (after copy):");

    cout << "-- After modifying orig’s ownerID to 2569 --"<<endl;
    orig.setOwnerID(2569);

    orig.display("orig:");
    shallowCopy.display("shallowCopy:");
    deepCopy.display("deepCopy:");

    return 0;
}
