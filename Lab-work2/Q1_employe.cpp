#include <iostream>
using namespace std;

class Employee
{

private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

public:
    void emp_detail()
    {

  
        cout << "Enter Employee ID:\n";
        cin >> emp_id;

        cout << "Enter Employee Name:\n";
        cin >> emp_name;

        cout << "Enter Employee Age:\n";
        cin >> emp_age;

        cout << "Enter Employee Role:\n";
        cin >> emp_role;

        cout << "Enter Employee Salary:\n";
        cin >> emp_salary;

        cout << "Enter Employee City:\n";
        cin >> emp_city;

        cout << "Enter Employee Experience:\n";
        cin >> emp_experience;

        cout << "Enter Employee Company Name:\n";
        cin >> emp_company_name;
    }

    void emp_check()
    {

        cout << "\nEmployee ID          : " << emp_id;
        cout << "\nEmployee Name        : " << emp_name;
        cout << "\nEmployee Age         : " << emp_age;
        cout << "\nEmployee Role        : " << emp_role;
        cout << "\nEmployee Salary      : " << emp_salary;
        cout << "\nEmployee City        : " << emp_city;
        cout << "\nEmployee Experience  : " << emp_experience;
        cout << "\nEmployee Company Name: " << emp_company_name;
    }
};

int main()
{

    Employee emp[5];

    cout << "Enter Details of Employee:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\n Employee " << i + 1 << ":\n";
        emp[i].emp_detail();
    }

    cout << "\n\nEmployee Records:\n";

    for (int i = 0; i < 5; i++)
    {
        emp[i].emp_check();
    }

    return 0;
}
