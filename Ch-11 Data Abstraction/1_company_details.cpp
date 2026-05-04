#include <iostream>
using namespace std;

class Admin {
private:
    string orgName;         

protected:
    double mgrSalary;
    double empSalary;
    int staffCount;
    double annualRevenue;
    bool hasFireAuthority;

public:
  
    Admin() {
        orgName = "BLUE TECH SOLUTIONS";
        mgrSalary = 90000;
        empSalary = 35000;
        staffCount = 60;
        annualRevenue = 1500000;
        hasFireAuthority = true;
    }

    void Company() {
        cout << "Company Name: " << orgName << endl;
    }

    virtual void myAccess() {
        cout << "\n=== Admin Access ===\n";
        Company();
        cout << "Manager Salary: " << mgrSalary << endl;
        cout << "Employee Salary: " << empSalary << endl;
        cout << "Total Staff: " << staffCount << endl;
        cout << "Annual Revenue: " << annualRevenue << endl;
        cout << "Can Terminate: " << (hasFireAuthority ? "Yes" : "No") << endl;
    }
};

class Manager : public Admin {
public:
    void myAccess() override {
        cout << "\n=== Manager Access ===\n";

        cout << "Manager Salary: " << mgrSalary << endl;
        cout << "Total Staff: " << staffCount << endl;
        cout << "Can Terminate: " << (hasFireAuthority ? "Yes" : "No") << endl;

        Company(); 
    }
};

class Employee : public Manager {
public:
    void myAccess() override {
        cout << "\n=== Employee Access ===\n";

        cout << "Employee Salary: " << empSalary << endl;
        cout << "Total Staff : " << staffCount << endl;

        Company();
    }
};

int main() {
    Admin a;
    Manager m;
    Employee e;

    a.myAccess();
    m.myAccess();
    e.myAccess();

    return 0;
}