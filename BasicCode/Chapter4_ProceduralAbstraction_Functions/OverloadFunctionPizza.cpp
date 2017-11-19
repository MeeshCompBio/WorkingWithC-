#include <iostream>

double unit_price (int diameter, double price);
// Returns the price per square inch of a pizza

//Overloading the function in case their is a rectagular pizza
double unit_price (int length, int width, double price);


int main()
{
    using namespace std;
    int diameter, length, width;
    double price_round, unit_price_round,price_rectangular, unit_price_rectangular;

    cout << "Welcome to the Pizza Union. \n";
    cout << "Enter the diameter of the pizza in inches: ";
    cin  >> diameter;
    cout << "Enter the price of this round pizza: $ " ;
    cin  >> price_round;
    cout << "Enter the length and width of pizza in inches: ";
    cin  >> length >> width;
    cout << "Enter the price of this rectangular pizza: $ " ;
    cin  >> price_rectangular;

    unit_price_rectangular = unit_price(length, width, price_rectangular);
    unit_price_round = unit_price(diameter,price_round);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << endl
         << "Round pizza price per square inch: $" << unit_price_round
         << endl
         << "Rectangular pizza price per square inch: $" << unit_price_rectangular
         << endl;

    if (unit_price_round < unit_price_rectangular)
        cout << "The round one is a better buy";
    else
        cout << "The rectangular one is a better buy";
    
    cout << "Now go and eat some pizza" << endl;
    return 0;
}


double unit_price (int diameter, double price)
{
    const double PI = 3.14159;
    double radius, area;

    radius = diameter/static_cast<double>(2);
    area = PI * radius *radius;
    return (price/area);
}

double unit_price (int length, int width, double price)
{
    double area = length * width;
    return (price/area);
}