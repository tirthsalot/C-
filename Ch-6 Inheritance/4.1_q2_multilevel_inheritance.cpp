#include <iostream>
using namespace std;

class Temperature {
protected:
    float celsius;

public:
    void setCelsius(float c) {
        celsius = c;
    }
};

class ConvertToFahrenheit : public Temperature {
protected:
    float fahrenheit;

public:
    void convertF() {
        fahrenheit = (celsius * 9/5) + 32;
        cout << "Fahrenheit: " << fahrenheit << endl;
    }
};

class ConvertToKelvin : public ConvertToFahrenheit {
public:
    void convertK() {
        float kelvin = fahrenheit + 273.15;
        cout << "Kelvin: " << kelvin << endl;
    }
};

int main() {
    ConvertToKelvin obj;

    float c;
    cout << "Enter Temperature in Celsius: ";
    cin >> c;

    obj.setCelsius(c);
    obj.convertF();
    obj.convertK();

    return 0;
}