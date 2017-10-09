#include <iostream>
using namespace std;

double unit_price (int diameter, double price);
// Returns the price per square inch of a pizza

int main()
{
    int diameter_small, diameter_large;
    double price_small, unitprice_small,
           price_large, unitprice_large;

    cout << "Welcome to the Pizza Consumers DB. \n"
         << "Enter the diameter of a small pizza (in inches): ";
    cin  >> diameter_small;
    cout << "Enter the price of a small pizza: $";
    cin  >> price_small;
    cout << "Enter the diameter of a large pizza (in inches): ";
    cin  >> diameter_large;
    cout << "Enter the price of a large pizza: $";
    cin  >> price_large;

    unitprice_small = unit_price(diameter_small, price_small);
    unitprice_large = unit_price(diameter_large, price_large);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Small Pizza: \n"
         << "Diameter = " << diameter_small << " inches\n"
         << "Price: $" << price_small << endl
         << " Per square inch = $" << unitprice_small << endl
         << "Large Pizza: \n"
         << "Diameter = " << diameter_large << " inches\n"
         << "Price: $" << price_large << endl
         << " Per square inch = $" << unitprice_large << endl;
    if (unitprice_large <= unitprice_small)
        cout << "The large pizza is the better buy\n";
    else
        cout << "The small pizza is the better buy \n";

    cout << "Now got eat some pizza";
    return 0;
}

double unit_price (int diameter, double price)
{
    const double PI = 3.14159;
    double radius, area;
    radius = diameter/static_cast<double>(2);
    area = PI * radius * radius;
    return(price/area);
}
