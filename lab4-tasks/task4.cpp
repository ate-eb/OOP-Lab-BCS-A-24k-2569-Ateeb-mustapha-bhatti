#include <iostream>
using namespace std;

class ServerSession {
private:
    int sessionID;
    string userName;

public:
    ServerSession(int id, const string &name)
        : sessionID(id), userName(name)
    {
        cout << "Session " << sessionID
             << " for user \"" << userName
             << "\" started — resource acquired."
             << endl;
    }

    ~ServerSession() {
        cout << "Session " << sessionID
             << " for user \"" << userName
             << "\" ending — resource released."
             << endl;
    }
};

int main() {
    cout << "Entering inner block" << endl;
    {
        ServerSession ss(2569, "ateeb");
        cout << "Inside block doing work with session." << endl;
    }
    cout << "Exited block — destructor should have run." << endl;
    return 0;
}
