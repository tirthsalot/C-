#include <iostream>
using namespace std;

class Employee
{
private:
    string empName;

public:
    void setEmpName()
    {
        cout << "Enter Employee Name: ";
        cin >> empName;
    }

    void displayEmpName()
    {
        cout << "\nEmployee Name: " << empName;
    }
};

class Manager : public Employee
{
protected:
    string managerName;

public:
    void setMgrName()
    {
        cout << "Enter Manager Name: ";
        cin >> managerName;
    }

    void displayMgrName()
    {
        cout << "\nManager Name: " << managerName;
    }
};

class People : public Manager
{
protected:
    string peopleName;

public:
    void setPeopleName()
    {
        cout << "Enter People Name: ";
        cin >> peopleName;
    }

    void displayPeopleName()
    {
        cout << "\nPeople Name: " << peopleName;
    }
};

int main()
{
    People obj;

    obj.setEmpName();
    obj.setMgrName();
    obj.setPeopleName();

    cout << "\n====== OUTPUT ======\n";

    obj.displayEmpName();
    obj.displayMgrName();
    obj.displayPeopleName();

    return 0;
}