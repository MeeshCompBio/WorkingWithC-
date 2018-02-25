#include <iostream>

//Function to fill up a vector using keyboard

void fill_up( int a[] , int size);

void fill_up( int a[] , int size)
{
    using namespace std;
    cout << "Enter" << size << " numbers: \n";
    for (int i = 0; i < size; i++ )
        cin >> a[i];
    size --;
    cout << "The last array index used is " << size << endl;
}