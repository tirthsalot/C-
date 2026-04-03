

#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string country;
        string course;
        string university;

        void StudentDetails(string n, string c, string co, string u) {
            name = n;
            country = c;
            course = co;
            university = u;
        }

        void display() {
            cout << "My Name is: " << name << endl;
            cout << "My Country is: " << country << endl;
            cout << "My Course is: " << course << endl;
            cout << "My University is: " << university << endl;
        }

};  

int main() {
    Student student1;
    student1.StudentDetails("Mitraj", "USA", "Computer Science", "MIT");
    student1.display();

    Student student2;
    student2.StudentDetails("Rutik", "UK", "Mechanical Engineering", "Cambridge");
    student2.display();

    return 0;
}