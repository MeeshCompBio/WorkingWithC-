// Program to how how a switch statement works

#include <iostream>
using namespace std;
int main( )
{
    char grade;
    cout << "Enter you midterm grade and press Return: ";
    cin  >> grade;

    switch (grade)
    {
        case 'A':
            cout << "Excellent \n"
                 << "You don't need to take the final\n";
            break;
        case 'B':
            cout << "Very good ";
            grade = 'A';
            cout << "Your midterm grade is now an "
                 << grade << endl;
            break;
        case 'C':
            cout << "Passing \n";
            break;
        // If we want multiple args for the same output
        case 'D':
        case 'F':
            cout << "Not good. "
                 << "You need to study more.\n";
            break;
        // This is for anything that is not specified
        default:
            cout << "That is not a valid grade.\n";
    }
    cout << "End program";
    return 0;
}