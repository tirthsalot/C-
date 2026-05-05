#include<iostream>
using namespace std;

class Bank{

    public:

    virtual void pay() = 0;
};

class card:public Bank{

    public:

    void pay(){
        
        cout<<"First Payment"<<endl;
    }
};

class UPI:public Bank{

    public:

    void pay(){
        
        cout<<"Second Payment"<<endl;
    }
};

int main(){

    Bank *obj;

    card c;
    UPI u;

    obj = &c;
    obj->pay();

    obj = &u;
    obj->pay();
}



    