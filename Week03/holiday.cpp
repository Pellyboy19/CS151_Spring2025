/*
today is valentine's day.
write a program that displays today's date 
and says happy valentine's day.
the date should be in the format: MM/DD/YYYY
3 string variable
1 char variable
2 string variables
cout all valves appropriately
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string month = "02";
    string day = "14";
    string year = "2025." ;

    char separator = '/';

    string messagesDate = "Today's date is:";
    string messagesVal = "Happy valentine's day";

    cout << messagesDate << month << separator << day << separator<< year 
    << messagesVal << endl;

    string message = messagesDate + month + separator + day + separator + year + messagesVal ;

    cout << message << endl;




}