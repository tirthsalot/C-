#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter first number: ";
    cin >> start;

    cout << "Enter second number: ";
    cin >> end;

    int array[100], count = 0;

    for(int i = start; i <= end; i++) {

        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
            array[count] = i;
            count++;
        }
    }

    cout << "\nLeap Years:\n";
    for(int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }

    // cout << "\nTotal Count: " << count;

    return 0;
}