// testing out new_line and get_int functions
#include <iostream>
using namespace std;

//gets rid of everything remaining in the line
void new_line();

void get_int(int& number);


int main()
{
    int n;

    get_int(n);
    cout << "Final value read int = " << n << endl
         << "End of demonstration";
    return 0;
}

// Uses io stream
void new_line()
{
    char symbol;
    do
    {
        cin.get(symbol);
    } while(symbol != '\n');
}

//Uses iostream
void get_int(int& number)
{
    char ans;
    do
    {
        cout << "Enter input number: ";
        cin  >> number;
        cout << "You entered " << number
             << " Is that correct (yes/no): ";
        cin  >> ans;
        new_line();
    } while ((ans != 'Y') && (ans != 'y'));
      // Checks to see if the users first input char starts with y or else go again
}