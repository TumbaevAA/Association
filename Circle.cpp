#include "Circle.h"
#include <iostream>
using namespace std;
#define PI 3.1415926535

Circle::Circle()
{
}

bool Circle::init(Point center, float radius)
{
    if (&center == nullptr && &radius == nullptr) return false;

    this->center = center;
    this->radius = radius;
}

bool Circle::input()
{
    Point center;
    float radius;
    if (center.input() && cin >> radius) this->init(center, radius);

    return false;
}

void Circle::output()
{
    cout << "Circle\n" << "----------------------------------------------" << endl;
    cout << "Center: ";
    this->center.output();
    cout << "\nRadius = " << this->radius;

    cout << "\n\nCircumference = " << this->circumference();
    cout << "\nArea = " << this->area();
    cout << "\n----------------------------------------------";
}

float Circle::area()
{
    return PI * this->radius * this->radius;
}

float Circle::circumference()
{
    return 2 * PI * this->radius;
}

Point Circle::getCenter()
{
    return this->center;
}

float Circle::getRadius()
{
    return this->radius;
}




