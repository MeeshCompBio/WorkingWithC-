#include <iostream>
#include <cstdlib>
#include <cctype>

// function to discard everything except for digits
void read_and_clean(int& n);

// discards input in the remainder of the line
void new_line();

// gives an input number that the user will approve
void get_int(int& input_number);

int main()
{
    using namespace std;
    int input_number;
    get_int(input_number);
    cout << "Final value read in = " << input_number << endl;
    return 0;
}

void get_int(int& input_number)
{
    using namespace std;
    char ans;
    do
    {
        cout << "Enter input number: ";
        read_and_clean(input_number);
        cout << "Your entered " << input_number
             << " Is that correct? (yes/no)?: ";
        cin >> ans;
        new_line();
    } while ((ans != 'y') && (ans != 'Y'));
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