#include <iostream>
using namespace std;

int main()
{
    int number;
    number = 100;

    for (number; number >= 0; --number)
    {
        cout << number
              << " bottles of beer on the wall. \n";
    }
}