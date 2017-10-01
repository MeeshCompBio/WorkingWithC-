#include <iostream>
using namespace std;

int main()
{
    cout << "This program tallies consercationist reports \n"
         << "on the green-necked vultures. \n"
         << "Each conservationist's reports consists of \n"
         << "a list of numbers. Each number is the count of \n"
         << "the eggs observed in one"
         << "green-necked vultre nest. \n"
         << "This program then tallies"
         << "The total number of eggs. \n";

        int number_of_reports;
        cout << "How many conservationist reports are there? ";
        cin  >> number_of_reports;

        int grand_total = 0, subtotal, count =1;
        for (count; count <= number_of_reports;  count++)
        {
            cout << endl << "Enter the report of "
                 << "conservation number " << count << endl;
            cout << "Enter the number of eggs in each nest \n"
                 << "Place a negative interger at the end of your list when done. \n";
            subtotal = 0;
            int next;
            cin >> next;
            while (next > 0)
            {
                subtotal = subtotal + next;
                cin >> next;
            }
            cout << "Total egg count for conservationists "
                 << " number" << count << " is "
                 << subtotal << endl;
            grand_total = grand_total + subtotal;
        }

        cout << endl << "Total egg count for all reports = "
             << grand_total << endl;
        return 0;
}