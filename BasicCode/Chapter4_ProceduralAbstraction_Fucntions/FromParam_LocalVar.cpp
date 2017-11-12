// Law office billing program
#include <iostream>
using namespace std;

const double RATE = 150.00; // Dollars per quarter hours

double fee(int hours_worked, int minutes_worked);
// Returns the charges for hours worked and minutes
// worked for legal services

int main( )
{
    int hours, minutes;
    double bill;

    cout << "Welcome to the offives of \n"
         << "Pearson, Specter, Lit \n"
         << "We cost more than we should \n"
         << "Enter the hours and minutes of your consultation: \n";
    cin  >> hours >> minutes;

    bill = fee(hours, minutes);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For " << hours << " hours and " << minutes
         << "minutes, your bill is $" << bill << endl;

    return 0;
}

double fee(int hours_worked, int minutes_worked)
{
    int quarter_hours;

    minutes_worked = hours_worked * 60 +minutes_worked;
    quarter_hours = minutes_worked/15;
    return (quarter_hours * RATE);
}