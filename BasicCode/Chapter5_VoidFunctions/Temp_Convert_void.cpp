// Program to convert Fahrenheit temp to Celciis
#include <iostream>

// create a newline void func
void initialize_screen();

// convert F to C
double celsius(double fahrenheit);

// Displays output
void show_results(double f_degrees, double c_degrees);

int main()
{
    using namespace std;
    double f_temperature, c_temperature;

    initialize_screen();
    cout << "I will convert F degrees to C degrees. \n"
         << "Enter a temp in F : ";
    cin  >> f_temperature;

    c_temperature = celsius(f_temperature);

    show_results(f_temperature, c_temperature);

    return 0;
}

void initialize_screen()
{
    using namespace std;
    cout << endl;
    return;
}


double celsius(double fahrenheit)
{
    return ((5.0/9.0)*(fahrenheit - 32));
}


void show_results(double f_degrees, double c_degrees)
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << f_degrees
         << " degrees Fahrenheit is equivalent to\n"
         << c_degrees << " degrees Celsius\n";
    return;
}

