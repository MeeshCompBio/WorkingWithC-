// Shows the difference between a set of golf scores (up to 10)
#include <iostream>

// function to fill an array. declare array, size of array, input numbers from user 
void fill_array(int a[], int size, int& number_used);


void sort(int a[], int number_used);

void swap_values(int &v1, int &v2);


int  index_of_smallest(const int a[], int start_index, int number_used);

int main()
{
    using namespace std;
    cout << "This programs sorts numbers from lowest to highest\n";

    int sample_array[10], number_used;
    fill_array(sample_array, 10, number_used);
    sort(sample_array, number_used);

    cout << "In sorted order the numbers are:\n";
    for(int index = 0; index < number_used; index++)
        cout << sample_array[index] << " ";
        cout << endl;

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


void sort(int a[], int number_used)
{
    int index_of_next_smallest;
    for(int index = 0; index < number_used; index++)
    {
        index_of_next_smallest = index_of_smallest(a, index, number_used);
        swap_values(a[index], a[index_of_next_smallest]);
    }
}

void swap_values(int &v1, int &v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}


int  index_of_smallest(const int a[], int start_index, int number_used)
{
    int min = a[start_index], index_of_min = start_index;
    for(int index = start_index + 1; index < number_used; index++)
        if (a[index] < min)
        {
            min = a[index];
            index_of_min = index;
        }
    return index_of_min;
}



