///Program to read in a text file and change every C to C++ while keeping structure

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void add_plus_plus(ifstream& in_stream, ofstream& out_stream);


int main()
{
    ifstream fin;
    ofstream fout;

    cout << "Begin editing file.\n";
    fin.open("cad.dat");
    if (fin.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    fout.open("cplustad.dat");
    if (fout.fail())
    {
        cout << "Could not open output file. \n";
        exit(1);
    }
    add_plus_plus(fin,fout);
    fin.close();
    fout.close();
    cout << "End of editing file.\n";
    return 0;
}

void add_plus_plus(ifstream& in_stream, ofstream& out_stream)
{
    char next;
    in_stream.get(next);
    while(! in_stream.eof())
    {
        if (next == 'C')
            out_stream << "C++";
        else
            out_stream << next;
        in_stream.get(next);
    }
}