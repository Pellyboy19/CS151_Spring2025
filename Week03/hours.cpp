/*
write a program that asks the user for the duration.
display hours and minutes of the duration. 
3 integer variable for hour, minutes, and duration
*/


#include <iostream>

using namespace std;

int main()
{
    int hour, minutes, duration ;

    cout << "write duration in minutes " << endl;
    cin >> duration;

    hour = duration / 60;
    minutes = duration % 60;

    cout << "Duration: " << hour << " hour(s) and " << minutes << " minute(s)." << endl;700
    


}