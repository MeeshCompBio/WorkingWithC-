//Driver program example for a function

#include <iostream>

void get_input(double& cost, int& turnover);

int main()
{
    using namespace std;
    double wholesale_cost;
    int shelf_time;
    char ans;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    // Run this task while ans equals Y or y
    do
    {
         get_input(wholesale_cost, shelf_time);

        cout << "Wholsale cost is now: $ "
             << wholesale_cost << endl;
        cout << "Days until sold is now: "
             << shelf_time << endl;

        cout << "Test again (Y/N):";
        cin  >> ans;
        cout << endl;
    }while (ans == 'y' || ans == 'Y');
    return 0;
}

void get_input(double& cost, int& turnover)
{
    using namespace std;
    cout << "Enter the wholesale cost of an item= $ ";
    cin  >> cost;
    cout << "Enter the expected number of days until sold: ";
    cin  >> turnover;
}