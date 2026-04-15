#include <iostream>
using namespace std;

class First {
public:
    void displayFirst() {
        cout << "This is First Class" << endl;
    }
};

class Second {
public:
    void displaySecond() {
        cout << "This is Second Class" << endl;
    }
};

class Third : public First, public Second {
};

int main() {
    Third obj;
    obj.displayFirst();
    obj.displaySecond();
}