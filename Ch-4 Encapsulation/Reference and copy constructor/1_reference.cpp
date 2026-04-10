#include<iostream>
using namespace std;


int main(){

    int a = 999;
    int &b = a; 

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    b = 599;

    cout << "Value Of a after changing b : " << a << endl;

    cout << "Value of b after changing b : " << b << endl;


    return 0;
}