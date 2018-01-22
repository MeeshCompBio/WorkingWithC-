// Reads first three lines of files then sums numbers and writes to test file
#include <fstream>

int main()
{
    using namespace std;
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open("infile.dat");
    out_stream.open("outfile.dat");
    int first, second, third;
    in_stream >> first >> second >> third;
    out_stream << "The sum of the first three numbers in infile.dat is : "
               << (first + second + third) << endl;
    in_stream.close();
    out_stream.close();
    return 0;
}