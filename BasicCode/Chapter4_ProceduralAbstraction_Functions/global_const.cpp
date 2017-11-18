#include <iostream>
#include <cmath>
using namespace std;
// This is how to declare a constant global var
const double PI = 3.14159;

double area (double radius);
// Returns aread of circle when you give radius

double volume (double radius);
// Returns volume of sphere with specified radius

int main()
{
    double radius_of_both, area_of_circle, volume_of_sphere;

    cout << "Enter a radius to use for both\n"
         << "a circle and a sphere in inches\n";
    cin  >> radius_of_both;

    area_of_circle = area(radius_of_both);
    volume_of_sphere = volume(radius_of_both);

    cout << "Radius = " << radius_of_both << " inches\n"
         << "Area of circle = " << area_of_circle
         << " square inches \n"
         << "Volume of sphere = " << volume_of_sphere
         << " cubic inches \n";

    return 0;
}

double area (double radius)
{
    return (PI * pow(radius, 2));
}

double volume (double radius)
{
    return ((4.0/3.0) * PI * pow(radius, 3));
}