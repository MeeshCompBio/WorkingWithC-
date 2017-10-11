#include <iostream>
using namespace std;

double est_total (int min_peas, int max_peas, int pod_count);
//Returns the total number of peas harvested

int main()
{
    int max_count, min_count, pod_count;
    // average_pea var is local to main
    double average_pea, yield;

    cout << "Enter the min and max number of peas in a pod: ";
    cin  >> min_count >> max_count;
    cout << "Enter the number of pods: ";
    cin  >> pod_count;
    cout << "Enter the weight of an average pea (in oz): ";
    cin  >> average_pea;

    yield = est_total(min_count, max_count, pod_count) * average_pea;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << "Min number of peas per pod = " << min_count << endl
         << "Max number of peas per pod = " << max_count << endl
         << "Average pea weight = "
         << average_pea << " oz" << endl
         << "Estimated average yield = " << yield << " oz"
         << endl;
    return 0;
}

double est_total (int min_peas, int max_peas, int pod_count)
{
    //the var below is local to the function
    double average_pea;

    average_pea = (max_peas + min_peas)/2.0;
    return (pod_count * average_pea);
}