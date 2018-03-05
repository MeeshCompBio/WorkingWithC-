// Search through a partially filled array with non-negative integers
#include <iostream>

const int DECLARED_SIZE = 20;


// function to fill an array. declare array, size of array, input numbers from user 
void fill_array(int a[], int size, int& number_used);

int search(const int a[], int number_used, int target);


int main()
{
    using namespace std;
    int arr[DECLARED_SIZE], list_size, target;

    fill_array(arr, DECLARED_SIZE, list_size);

    char ans;
    int result;

    do
    {
        cout << "Enter a number to search for: ";
        cin  >> target;
        cout << endl;

        result = search(arr, list_size, target);
        if (result == -1)
            cout << target << " is not on the list.\n";
        else
            cout << target << " is stored in array position: "
                 << result << endl
                 << "Remember that the first position is 0\n";
        cout << "Search again? (y/n followed by Enter.)\n";
        cin  >> ans;
    } while((ans != 'n') && (ans != 'N'));

    cout << "End of the program. \n";
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

int search(const int a[], int number_used, int target)
{
    int index = 0;
    bool found = false;
    while((!found) && (index < number_used))
        if (target == a[index])
            found = true;
        else
            index ++;
    if (found)
        return index;
    else
        return -1;
}