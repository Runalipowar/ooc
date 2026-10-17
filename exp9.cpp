
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

// Base abstract class
class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;

    virtual ~Shape() {}
};

// Derived class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() const override {
        return PI * radius * radius;
    }

    double calculatePerimeter() const override {
        return 2 * PI * radius;
    }
};

int main() {
    double r;

    cout << "Enter radius of circle: ";
    cin >> r;

    Circle c(r);

    cout << "Area of Circle: " << c.calculateArea() << endl;
    cout << "Perimeter of Circle: "
         << c.calculatePerimeter() << endl;

    return 0;
}
