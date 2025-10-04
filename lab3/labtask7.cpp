#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    double marks;
    char grade;
public:
    Student(string n, int r, double m) {
        name = n;
        rollNo = r;
        marks = m;
        grade = 'F';
    }
    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else
            grade = 'F';
    }
    void displayStudentInfo() {
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks : " << marks << endl;
        cout << "Grade : " << grade << endl;
    }
};
int main() {
    Student s1("Ayesha Khan", 105, 88.4);
    Student s2("Hamza Ali", 210, 67.9);
    s1.calculateGrade();
    s2.calculateGrade();
    cout << "Student Details:" << endl;
