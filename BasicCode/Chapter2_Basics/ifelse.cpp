#include <iostream>
using namespace std;
int main( )
{
    int hours;
    double gross_pay, rate;

    cout << "Enter the hourly rate of pay: $";
    cin >> rate;
    cout << " Enter the number of hours worked,\n";
    cout << "rounded to a whole number of hours: ";
    cin >> hours;

    if (hours > 40)
        gross_pay = rate * 40 + 1.5 * rate * (hours-40);
    else if (hours == 0)
        if (rate == 0 )
            //this will only output if hours is also zero
            //I just wanted to show a nested if
            cout << "We don't pay you anything\n";
        else
            cout << "You didn't work this week\n";
    else
        gross_pay = rate * hours;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Hours = " << hours << endl;
    cout << "Hourly pay rate = $" << rate << endl;
    cout << "Gross pay = $" << gross_pay << endl;
    return 0;
}
