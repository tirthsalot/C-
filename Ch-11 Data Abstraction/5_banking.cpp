#include<iostream>
using namespace std;

class bank{

public:
    virtual void out(){
        cout<<"Bank Payment"<<endl;
    }
};

class card:public bank{

public:
    void out(){
        cout<<"Card Payment"<<endl;
    }
};

class upi:public bank{

public:
    void out(){
        cout<<"UPI Payment"<<endl;
    }
};

int main(){

    bank *obj;

    bank b;
    card c;
    upi u;

    obj = &b;
    obj->out();

    obj = &c;
    obj->out();

    obj = &u;
    obj->out();

    return 0;
}