#include <iostream>
using namespace std;

int main()
{
    string password;
    bool Upper = false;

    cout << "Enter your password:\n";
    cin >> password;

    try
    {
        for (int i = 0; i < password.length(); i++)
{
    if (password[i] >= 'A' && password[i] <= 'Z')
    {
        Upper = true;
        break;
    }
}
        if (!Upper)
        {
            throw "Error: Password must contain at least one uppercase letter!";
        }

        cout << "Password is valid." << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}