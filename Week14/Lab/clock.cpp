#include <iostream>
#include <iomanip>  
#include <sstream>  
using namespace std;


string showTime(int hours, int minutes = 0) {
    stringstream ss;
    string period = (hours >= 12) ? "PM" : "AM";

   
    int displayHour = hours % 12;
    if (displayHour == 0) displayHour = 12;

   
    ss << setfill('0') << setw(2) << displayHour << ":"
       << setw(2) << minutes << " " << period;

    return ss.str();
}

int main() {
  
    cout << "Testing showTime function:\n";
    cout << "showTime(0, 0)      => " << showTime(0, 0) << endl;
    cout << "showTime(12, 0)     => " << showTime(12, 0) << endl;
    cout << "showTime(23, 59)    => " << showTime(23, 59) << endl;
    cout << "showTime(12, 59)    => " << showTime(12, 59) << endl;
    cout << "showTime(13, 30)    => " << showTime(13, 30) << endl;
    cout << "showTime(14)        => " << showTime(14) << endl;
    cout << "showTime(15)        => " << showTime(15) << endl;

    return 0;
}
