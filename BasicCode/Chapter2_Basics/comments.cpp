//File Name: comments.cpp
//Author: MeeshCompBio
//Email Address:
//Assignment Number:
//Description: Scritp to see if you are sick
//Last changed: check the git

/* With github, I reall don't need to 
put everything above, but it is nice to know
what you should do if you don't have git */


#include <iostream>
using namespace std;
int main( )
{
    const double NORMAL = 98.6; //degrees F
    double temperature;

    cout << "Enter your temperature: ";
    cin  >> temperature;

    if (temperature > NORMAL)
    {
        cout << "You have a fever\n"
             << "Drink lots of water and get some rest\n";
    }
    else
    {
        cout << "You don't have a fever\n"
             << "Go study. \n";
    }

    return 0;
}