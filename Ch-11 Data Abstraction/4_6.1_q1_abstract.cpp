
#include <iostream>
using namespace std;

class shape
{

public:
    virtual void calculate() = 0;
};

class circle : public shape
{

    float f;

public:
    circle(float floating)
    {

        f = floating;
    }

    void calculate()
    {

        cout << "circle : " << 3.14 * f * f << endl;
    }
};

class triangle : public shape
{

    float h, b;

public:
    triangle(float hight, float base)
    {

        h = hight;
        b = base;
    }

    void calculate()
    {

        cout << "Triangle : " << 0.5 * h * b << endl;
    }
};

class reactangle : public shape
{

    float l, w;

public:
    reactangle(float length, float width)
    {

        l = length;
        w = width;
    }

    void calculate()
    {

        cout << "Reactangle : " << l * w << endl;
    }
};

int main()
{

    shape *obj;

    circle c(22.7);
    triangle t(21, 13);
    reactangle r(21, 31);

    obj = &c;
    obj->calculate();

    obj = &t;
    obj->calculate();

    obj = &r;
    obj->calculate();

    return 0;
}
