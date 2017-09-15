#include <iostream>
using namespace std;

int main()
{
    int number_of_bars;
    double one_weight, total_weight;

    cout << "Enter the number of candy bars in a package\n";
    cout << "and then the weight in ounces of one candy bar.\n";
    cout << "Then press enter\n";
    cin  >> number_of_bars;
    cin  >> one_weight;
    total_weight = one_weight * number_of_bars;
    cout << number_of_bars << "candy bars \n";
    cout << one_weight << " ounces each \n";
    cout << "Total weight is " << total_weight << " ounces.\n";

    cout << "Try another brand.";
    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight in ounces of one candy bar.\n";
    cout << "Then press enter.\n";
    cin  >> number_of_bars;
    cin  >> one_weight;

    total_weight = one_weight * number_of_bars;

    cout << number_of_bars << "candy bars \n";
    cout << one_weight << " ounces each \n";
    cout << "Total weight is " << total_weight << " ounces.\n";

    cout << "Keep eating candy bars";

    return 0;
}