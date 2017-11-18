#include <iostream>
#include <cmath>
// instead of calling namespace standard glocally we can 
// call it locally for each block


// This is how to declare a constant global var
const double PI = 3.14159;

double area (double radius);
// Returns aread of circle when you give radius

double volume (double radius);
// Returns volume of sphere with specified radius

int main()
{
    //This is not the best example but using namespace within eacch block
    //Is the same as using it globally
    using namespace std;

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
    // Calling it here
    using namespace std;
    return (PI * pow(radius, 2));
}

double volume (double radius)
{
    // Calling it here
    using namespace std;
    return ((4.0/3.0) * PI * pow(radius, 3));
}