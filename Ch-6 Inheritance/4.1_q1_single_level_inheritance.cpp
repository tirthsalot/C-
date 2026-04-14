#include <iostream>
using namespace std;

class X
{
protected:
    int x, y, z;   
};

class Y : public X
{
public:
    void setData()
    {
        cout << "Enter Three Numbers: ";
        cin >> x >> y >> z;
    }

    void getData()
    {
        int sum = (x*x*x) + (y*y*y) + (z*z*z);
        cout << "Sum of Cubes: " << sum;
    }
};

int main()
{
    Y obj;

    obj.setData();
    obj.getData();

    return 0;
}