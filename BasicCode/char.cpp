#include <iostream>

using namespace std;

int main()
{
    //call multiple variables of the same type in one line
    char symbol1, symbol2, symbol3;

    cout << "Enter two initials, without and periods: ";
    cin >> symbol1 >> symbol2  ;
    cout << "The two initials are: ";
    cout << symbol1 << symbol2 << endl;
    cout << "Once more with a space: \n";
    symbol3 = ' ';
    cout << symbol1 <<symbol3 << symbol2 << endl;
    cout << "We are done here";
    return 0;
}