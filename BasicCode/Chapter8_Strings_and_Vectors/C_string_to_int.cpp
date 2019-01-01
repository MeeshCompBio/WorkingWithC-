// Showing how to use read and clean
#include <iostream>
#include <cstdlib>
#include <cctype>

// Reads in line of input and discards everything but digits
void read_and_clean(int& n);

//Discards the rest of the input on the line analyzed
void new_line();

int main()
{
    using namespace std;
    int n;
    char ans;
    do
    {
        cout << "Enter and integer and press Enter: ";
        read_and_clean(n);
        cout << "That string converts to the integer " << n << endl;
        cout << "Again? (yes/no):";
        cin >> ans;
        new_line();
    } while ((ans != 'n') && (ans != 'N'));
    return 0;
}


void read_and_clean(int& n)
{
    using namespace std;
    const int ARRAY_SIZE = 6;
    char digit_string[ARRAY_SIZE];

    char next;
    cin.get(next);
    int index = 0;
    while (next != '\n')
    {
        if ((isdigit(next)) && (index < ARRAY_SIZE))
        {
            digit_string[index] = next;
            index ++;
        }
        cin.get(next);
    }
    digit_string[index] = '\0';
    n = atoi(digit_string);
}

void new_line()
{
    using namespace std;
    char symbol;
    do
    {
        cin.get(symbol);
    } while(symbol != '\n');
}

//Uses iostream
void get_int(int& number)
{
    using namespace std;
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