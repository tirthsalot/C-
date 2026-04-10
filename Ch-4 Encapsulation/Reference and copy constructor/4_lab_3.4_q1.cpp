#include<iostream>
using namespace std;

class Student
{
    public:
    string stu_name;
    int stu_rollno;
    float stu_gpa;

    public:
    Student()
    {
        stu_name = "Unknown";
        stu_rollno = 0;
        stu_gpa = 0.0;

        cout << "Default constructor called" << endl;
    }

    Student(string name, int rollno, float gpa)
    {
        stu_name = name;
        stu_rollno = rollno;
        stu_gpa = gpa;

        cout << "Parameterized constructor called" << endl;
    }
    Student(const Student &s)

    {
        stu_name = s.stu_name;
        stu_rollno = s.stu_rollno;
        stu_gpa = s.stu_gpa;

        cout << "Copy constructor called" << endl;
    }

    string getname() const{
        return stu_name;
    }

    int getrollno() const{
        return stu_rollno;
    }

    float getgpa() const{
        return stu_gpa;
    }

    void display() const{
        cout << "Name: " << stu_name << endl;
        cout << "Roll No: " << stu_rollno << endl;
        cout << "GPA: " << stu_gpa << endl;
    }
};

int main()
{
    Student s1("Rutik", 101, 3.8);
    cout << "Student 1 details:" << endl;
    s1.display();

    Student s2(s1);
    cout << "Student 2 details:" << endl;
    s2.display();

    return 0;
}