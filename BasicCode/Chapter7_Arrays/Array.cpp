// Reads in scores and gives the differences from the highest score
#include <iostream>

int main()
{
    using namespace std;
    int i, score[5], max;

    cout << "Enter 5 score:\n";
    cin >> score[0];
    max = score[0];

    for (i = 1; i < 5; i++)
    {
        cin >> score[i];
        if (score[i] > max)
            max = score[i];
    }

    cout << "The highest score is " << max << endl
         << "The scores and thier differences from the highest are:\n";
    for (i = 0; i < 5; i++)
    {
        cout << score[i] << " off by "
             << (max - score[i]) << endl;
    }

    return 0;
}