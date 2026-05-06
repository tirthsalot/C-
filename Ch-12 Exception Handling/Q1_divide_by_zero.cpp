#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number:\n"; 
    cin >> num1;

    cout << "Enter second number:\n"; 
    cin >> num2;

    try
    {
        if (num2 == 0)
        {
            throw "Error: Division by zero is not allowed!";
        }

        int result = num1 / num2;
        cout << "Result = " << result << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}