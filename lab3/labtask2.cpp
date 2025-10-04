#include <iostream>
using namespace std;
class student{
	private:
		int rollNumber;
	public:
		string name;
		void setRollno(int r){
			rollNumber = r;
		}
		int getRollno(){
		return rollNumber;
		}
		
};
int main(){
	student s;
	s.name = "ateeb";
	s.setRollno(2569);
	cout<<"student name : "<< s.name<<endl;
	cout<<"student roll number : "<< s.getRollno()<<endl;
}
