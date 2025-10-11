#include <iostream>
using namespace std;
class MobileAccount{
	double balance;
	string phoneNumber;
	public:
	MobileAccount(){
		balance = 50.0;
		phoneNumber = "";
	}
	MobileAccount(double b, string pn){
		 balance = b;
		 phoneNumber = pn;
	}
	void display(){
		cout<<"Phone number: "<<phoneNumber<<", Current balance: "<<balance<<endl;
	}
};
int main(){
	MobileAccount mb1(100.0, "0332-3970904");
	mb1.display();
}
