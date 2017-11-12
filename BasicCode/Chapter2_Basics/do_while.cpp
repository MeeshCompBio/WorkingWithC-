#include <iostream>
using namespace std;
int main( )
{
    char ans;

    do
    {
        cout << "Hello\n";
        cout << "Do you want another greeting?\n"
             << "Press y for yes, n for no,\n"
             << "then press enter: ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "See ya\n";
    return 0;
}