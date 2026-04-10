#include<iostream>
using namespace std;

class Student{

    private:
    int student_roll_number;
    string student_name;

    public:
    Student(int roll_number, string name)
    {

        this->student_roll_number = roll_number;
        this->student_name = name;
        
    }

    Student (const Student &s)
    {
        student_roll_number = s.student_roll_number;
        student_name = s.student_name;

    }

    void getstudent()
    {
        cout << "Student Roll Number : " << student_roll_number << endl;
        cout << "Student Name : " << student_name << endl;
    }
    
};
int main(){

    Student s1(101, "Julie");
    Student s2 = s1;
    s1.getstudent();
    s2.getstudent();


    return 0;
}