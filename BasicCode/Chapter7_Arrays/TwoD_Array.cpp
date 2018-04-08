// Reads grade scores for studemts into 2d arrays calculate ave then spit output
#include <iostream>
#include <iomanip>
const int NUMBER_STUDENTS = 4, NUMBER_QUIZZES = 3;

// input 2d array of grades and calulate average for all students
void compute_st_ave(const int grade[][NUMBER_QUIZZES], double st_ave[]);

// Calculate the average for each quiz
void compute_quiz_ave(const int grade[][NUMBER_QUIZZES], double quiz_ave[]);

// Return all of the data
void display(const int grade[][NUMBER_QUIZZES], const double st_ave[], const double quiz_ave[]);

int main()
{
    using namespace std;
    // set out 2D array
    int grade[NUMBER_STUDENTS][NUMBER_QUIZZES];
    double st_ave[NUMBER_STUDENTS];
    double quiz_ave[NUMBER_QUIZZES];

    // Code for filling an array is not included
    compute_st_ave(grade, st_ave);
    compute_quiz_ave(grade, quiz_ave);
    //display(grade, st_ave, quiz_ave);

    return 0;
}

void compute_st_ave(const int grade[][NUMBER_QUIZZES], double st_ave[])
{
    for (int st_num = 1; st_num <= NUMBER_STUDENTS; st_num++)
    {
        double sum = 0;
        for (int quiz_num = 1; quiz_num <= NUMBER_QUIZZES; quiz_num++)
            sum = sum + grade[st_num - 1][quiz_num - 1];
        st_ave[st_num - 1] = sum/NUMBER_QUIZZES;
    }
}

void compute_quiz_ave(const int grade[][NUMBER_QUIZZES], double quiz_ave[])
{
    for (int quiz_num = 1; quiz_num <= NUMBER_QUIZZES; quiz_num++)
    {
        double sum = 0;
        for (int st_num = 1; st_num <= NUMBER_STUDENTS; st_num++)
            sum = sum + grade[st_num - 1][quiz_num - 1];
        quiz_ave[quiz_num - 1] = sum/NUMBER_STUDENTS;
    }
}

void display(const int grade[][NUMBER_QUIZZES], const double st_ave[], const double quiz_ave[])
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << setw(10) << "Student"
         << setw(5)  << "Ave"
         << setw(15) << "Quizzes\n";
    for (int st_num = 1; st_num <= NUMBER_STUDENTS; st_num++)
    {
        cout << setw(10) << st_num
             << setw(5)  << st_ave[st_num - 1] << " ";
        for (int quiz_num = 1; quiz_num <= NUMBER_QUIZZES; quiz_num++)
            cout << setw(5) << grade[st_num - 1][quiz_num - 1];
        cout << endl;
    }
    cout << "Quiz averages = ";
    for (int quiz_num = 1; quiz_num <= NUMBER_QUIZZES; quiz_num++)
        cout << setw(5) << quiz_ave[quiz_num - 1];
    cout << endl;
}