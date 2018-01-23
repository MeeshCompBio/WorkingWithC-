// Takes poorly formated data and returns nicely formatted data
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Takes in messy file name and a new file name to output to, how many sig digits after decimal,
// and the width of each field

void make_neat(ifstream& messy_file, ofstream& neat_file,
               int number_after_decimal, int field_width);

int main()
{
    ifstream fin;
    ofstream fout;

    fin.open("rawdata.dat");
    if (fin.fail())
    {
        cout << "Can't open file, make sure it exists,\n";
        exit(1);
    }
    fout.open("neat.dat");
    if (fout.fail())\
    {
        cout << "Can't open output file.";
        exit(1);
    }

    make_neat(fin, fout, 5, 12);
    fin.close();
    fout.close();
    cout << "End of the script.\n";
    return 0;
}


void make_neat(ifstream& messy_file, ofstream& neat_file, int number_after_decimal, int field_width)
{
    //set the width, decimal places ect
    neat_file.setf(ios::fixed);
    neat_file.setf(ios::showpoint);
    neat_file.setf(ios::showpos);
    neat_file.precision(number_after_decimal);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.precision(number_after_decimal);
// set variable as doubles since we are reading in numbers
    double next;
    //keep reading file until there are no more numbers
    while (messy_file >> next)
    {
        cout << setw(field_width) << next << endl;
        neat_file << setw(field_width) << next << endl;
    }
}