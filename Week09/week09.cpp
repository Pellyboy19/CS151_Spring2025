#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    string name;

    cout << "Please enter your name: ";
    cin >> name;

    while (name != "stop")
    {
        cout << "Hi " << name << endl;
        cout << "Please enter your name: ";
        cin >> name;
    }
    */

    // int num = 60;
    // do
    // {
    //     cout << num-- << endl;
    // } while(num >= 0);

    for (int num = 0; num * 5 <= 100; num++)
    {
        cout << num * 5 << endl;
    }
    


    return 0;
}