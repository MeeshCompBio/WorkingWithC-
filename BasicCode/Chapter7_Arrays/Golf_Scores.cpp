// Shows the difference between a set of golf scores (up to 10)
#include <iostream>
// Set a limit of 10 scores
const int MAX_NUMBER_SCORES = 10;

// function to fill an array. declare array, size of array, input numbers from user 
void fill_array(int a[], int size, int& number_used);

// returns the average of numbers in an array
double compute_average(const int a[], int number_used);

// output the differences between each score and the arrays average
void show_difference( const int a[], int number_used);


int main()
{
    using namespace std;
    int score[MAX_NUMBER_SCORES], number_used;

    cout << "This program reads gold scores and shows\n"
         << "how much each differs from the average\n";

    cout << "Enter golf scores: \n";
    fill_array(score, MAX_NUMBER_SCORES, number_used);
    show_difference(score, number_used);

    return 0;
}


void fill_array(int a[], int size, int& number_used)
{
    using namespace std;
    cout << "Enter up to " << size << " nonnegative whole numbers.\n"
         << "Mark the end of the list with a negative numnber.\n";
    int next, index = 0;
    cin >> next;
    // make sure next is non-negative or else end filling the array
    while((next > 0) && (index < size))
    {
        a[index] = next;
        index++;
        cin >>next;
    }
    number_used = index;
}

double compute_average(const int a[], int number_used)
{
    double total = 0;
    for(int index = 0; index < number_used; index ++)
        total = total + a[index];
    if (number_used > 0)
    {
        return (total/number_used);
    }
    else
    {
        using namespace std;
        cout << "ERROR: number of elments in 0 in compute_average.\n"
             << "compute_average returns 0";
        return 0;
    }
}


void show_difference( const int a[], int number_used)
{
    using namespace std;
    double average = compute_average(a, number_used);
    cout << "Average of the " << number_used
         << " scores = " << average << endl
         << "The scores are:\n";
    for (int index = 0; index < number_used; index++)
        cout << a[index] << " differs from average by "
             << (a[index] - average) << endl;
}