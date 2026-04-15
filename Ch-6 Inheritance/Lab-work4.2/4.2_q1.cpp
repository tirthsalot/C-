#include <iostream>
using namespace std;

class Bank {
protected:
    float interestRate;

public:
    void displayRate() {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class RBI : public Bank {
public:
    RBI() {
        interestRate = 6.8;
    }
};

class BOB : public Bank {
public:
    BOB() {
        interestRate = 7.2;
    }
};

class ICICI : public Bank {
public:
    ICICI() {
        interestRate = 7.6;
    }
};

int main() {
    RBI r;
    BOB b;
    ICICI i;

    cout << "HDFC Bank: ";
    r.displayRate();

    cout << "Axis Bank: ";
    b.displayRate();

    cout << "Kotak Bank: ";
    i.displayRate();

    return 0;
}