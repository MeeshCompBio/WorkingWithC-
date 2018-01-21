// Determine the pricing of an item based off of how long it will sit on the 
// shelf and how much of a discount the store wants to give

#include <iostream>

const double LOW_MARKUP = 0.05;
const double HIGH_MARKUP = 0.10;
const int THRESHOLD = 7; // use high markup if item is expecte to sell < THRESHOLD

// Program intro
void introduction();

//Get cost of item on how long it plans to sit on shelf
void get_input(double& cost, int& turnover);

//Will return the retail price of an item
double price(double cost, int turnover);

// write the values on the screen
void give_output( double cost, int turnover, double price);

int main()
{
    double wholesale_cost, retail_price;
    int shelf_time;

    introduction();
    get_input(wholesale_cost, shelf_time);
    retail_price = price(wholesale_cost, shelf_time);
    give_output(wholesale_cost, shelf_time, retail_price);
    return 0;
}

void introduction()
{
    using namespace std;
    cout << "This program determines the retail price for \n"
         << "an item at a supermarket store. \n";
}

void get_input(double& cost, int& turnover)
{
    using namespace std;
    cout << "Enter the wholesale cost of an item= $ ";
    cin  >> cost;
    cout << "Enter the expected number of days until sold: ";
    cin  >> turnover;

}

void give_output( double cost, int turnover, double price)
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Wholesale cost = $ " << cost << endl
         << "Expected time until sold = "
         << turnover << " days" << endl
         << "Retail price = $ " << price << endl;
}

// Uses defined constants below
double price(double cost, int turnover)
{
    if (turnover <= THRESHOLD)
        return(cost + (LOW_MARKUP * cost));
    else
        return(cost + (HIGH_MARKUP * cost));
}