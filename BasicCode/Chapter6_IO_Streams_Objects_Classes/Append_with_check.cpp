//Append data to the end of a file
#include <fstream>
#include <iostream>
#include <cstdlib>

int main()
{
    using namespace std;
    char file_name[16];

    // have user input the file name
    cout << "What is your file name (max 15 char): ";
    cin  >> file_name;

    cout << "Opening data.txt for appending. \n";
    ofstream fout;
    fout.open(file_name, ios::app);
    // make sure the file exists but above will make a file if it does not exist
    if (fout.fail())
    {
        cout << file_name << " does not exist. \n";
        exit(1);
    }
    fout << "5 6 pickup sticks.\n"
         << "7 8 ain't CPP great.\n";

    fout.close();
    cout << "End of script\n";

    return 0;
}