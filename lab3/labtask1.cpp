#include <iostream>
using namespace std;
class student{
	public:
		string name;
		int rollNumber;
		
};
int main(){
	student s;
	s.name = "ateeb";
	s.rollNumber = 2569;
	cout<<"student name : "<< s.name<<endl;
	cout<<"student roll number : "<< s.rollNumber<<endl;
}
