#include<iostream>
using namespace std;
class NUCES_Student{
	private:
		int id;
		string name;
		public:
			NUCES_Student(){
				id = 0;
				name = "Not registered";
			}
			NUCES_Student(int id){
				this->id = id;
				name = "Name pending";
			}
			NUCES_Student(int id, const string &name){
				this->id = id;
				this->name = name;
			}
			void display() const{
			cout<<"Student ID: "<<id<<endl<<"Student name: "<<name<<endl;
			}
};
int main(){
	NUCES_Student s1;
	s1.display();
	NUCES_Student s2(101);
	s2.display();
	NUCES_Student s3(103,"Ateeb");
	s3.display();
}
