//An example of call by reference parameters
#include <iostream>

// read in two ints from the keyboard
void get_input(int& input1, int& input2);

//the swap
void swap_values(int& variable1, int& variable2);

// orders input so first value is the smallest
void order(int& n1, int &n2);

// show the results of var 1 and var 2 
void give_results(int output1, int output2);

int main()
{
    int first_num , second_num;

    get_input(first_num, second_num);
    order(first_num, second_num);
    give_results(first_num, second_num);
    return 0;
}

//uses iostream
void get_input(int& input1, int& input2)
{
    using namespace std;
    cout << "Enter two integers: ";
    cin  >> input1
         >> input2;
}

void swap_values(int& variable1, int& variable2)
{
    int temp;
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void order(int& n1, int &n2)
{
    if (n1 > n2)
        swap_values(n1, n2);
}
//uses iostream
void give_results(int output1, int output2)
{
    using namespace std;
    cout << "In increasing order, the numbers are: "
         << output1 << " " << output2 << endl;
}