#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "I am a Person" << endl;
    }
};

class Student : public Person {
};

class Teacher : public Person {
};

class Assistant : public Student, public Teacher {
};

int main() {
    Assistant obj;
    obj.Student::showPerson();
    obj.Teacher::showPerson();
}