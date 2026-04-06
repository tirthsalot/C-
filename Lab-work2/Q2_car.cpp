#include <iostream>
using namespace std;

class Car
{
private:
    int car_id;
    string car_company_name;
    string car_color;
    int car_model;
    int car_release_year;

public:
    void input()
    {
        cout << "Enter Car ID:\n";
        cin >> car_id;

        cout << "Enter Company Name:\n";
        cin >> car_company_name;

        cout << "Enter Car Color:\n";
        cin >> car_color;

        cout << "Enter Car Model:\n";
        cin >> car_model;

        cout << "Enter Release Year:\n";
        cin >> car_release_year;
    }

    void display()
    {
        cout << "\nCar ID: " << car_id;
        cout << "\nCompany Name: " << car_company_name;
        cout << "\nCar Color: " << car_color;
        cout << "\nCar Model: " << car_model;
        cout << "\nRelease Year: " << car_release_year;
    }
};

int main()
{
    Car c[4];  

    for (int i = 0; i < 4; i++)
    {
        cout << "\nEnter details for Car " << i + 1 << endl;
        c[i].input();
    }

    cout << "\nCar Records:\n";
    for (int i = 0; i < 4; i++)
    {
        c[i].display();
    }

    return 0;
}