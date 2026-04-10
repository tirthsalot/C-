#include<iostream>
using namespace std;

void display(int &number){

    number = 1000; 
}
 
int main(){

    int number = 500;

    cout << "Value of number : " << number << endl;

    display(number);

    cout << "Number Of Value : " << number << endl;




    return 0;
}