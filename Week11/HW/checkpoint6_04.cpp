/*
The following program skeleton determines whether a person qualifies for a
credit card. To qualify, the person must have worked on his or her current job
for at least 2 years, and make at least $17,000 per year. Finish the program by
writing the definitions of the functions qualify and noQualify. The function
qualify should explain that the applicant qualifies for the card, and that the
annual interest rate is 12 percent. The function noQualify should explain that the
applicant does not qualify for the card and give a general explanation why.
*/

#include <iostream>
using namespace std;

// You must write definitions for the two functions qualify
// and noQualify.

int main()
{
    double salary;
    int years;

    cout << "This program will determine if you qualify\n";
    cout << "for our credit card.\n";
    cout << "What is your annual salary? ";
    cin >> salary;
    cout << "How many years have you worked at your ";
    cout << "current job? ";
    cin >> years;
    if (salary >= 17000.0 && years >= 2)
        qualify();
    else
        noQualify();
    return 0;
}