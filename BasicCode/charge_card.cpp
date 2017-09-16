#include <iostream>
using namespace std;
int main( )
{
    double balance = 50.00;
    int count = 0;

    cout << "This programs tells you how long it takes\n"
         << "to accumulate a debt of $100, starting with \n"
         << "an intitial balance of $50 owed. \n"
         << "The interest rate it 2% per month.\n";

    while (balance < 100.00)
    {
        balance = balance + 0.02 * balance;
        //add one to count int
        count++;
    }

    cout << "After " << count << " months,\n";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "your balance due will be $" << balance << endl;
    return 0;
}