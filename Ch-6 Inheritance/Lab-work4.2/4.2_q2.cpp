#include <iostream>
using namespace std;

class A {
protected:
    int a;

public:
    A(int x) {
        a = x;
    }
};

class B : virtual public A {
protected:
    int b;

public:
    B(int x, int y) : A(x) {
        b = y;
    }
};

class C : virtual public A {
protected:
    int c;

public:
    C(int x, int z) : A(x) {
        c = z;
    }
};

class D : public B, public C {
    int d;

public:
    D(int w, int x, int y, int z)
        : A(w), B(w, x), C(w, y) {
        d = z;
    }

    void sum() {
        cout << "Sum = " << a + b + c + d << endl;
    }
};

int main() {
    D obj(10, 20, 30, 40);
    obj.sum();

    return 0;
}