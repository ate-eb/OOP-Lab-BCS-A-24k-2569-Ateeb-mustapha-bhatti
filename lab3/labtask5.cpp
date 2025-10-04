#include <iostream>
using namespace std;
class Concrete{
	private:
		string message;
		public:
			Concrete(string msg){
				message = msg;
			}
			void displayMessage(){
				cout<<message<<endl;
			}
};
int main(){
	Concrete c("I hate playing clash royale ");
	c.displayMessage();
}
