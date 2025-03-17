#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

void quiz01_ec()
{
    cout << "Programming is fun!\n";
}
void quiz02_ec()
{
    long byte = 8; // bits
    long gigabyte = pow(2,30) * byte;
    long answer = 2 * gigabyte;
    cout << answer << endl;
    cout << pow(2,34) << endl;
}
void quiz03_ec()
{
    /* Whats's wrong with this program? */
    
    int a,b,c; // Three integers
    a = 3;
    b = 4;
    c = a + b;
    cout << "The value of c is: " << c << endl;
}
void quiz04_ec()
{
    const double PI = 3.1415926;
    int ans = pow(sin(PI),2) + pow(cos(PI),2);
    cout << ans << endl;
}
void quiz05_ec()
{
    int a = 5, b = 3;
    bool valid = (pow(a,2) - pow(b,2)) == ((a - b) * (a + b));
    cout << boolalpha << valid << endl;
}
void quiz06_ec()
{
    int width = 10;
    cout << boolalpha << left << setw(width) << "P" << setw(width) << "Q" << setw(width) << "P != Q" << endl;
    // cout << setw(width) << true << setw(width) << true << setw(width) << (true != true) << endl;
    // cout << setw(width) << true << setw(width) << false << setw(width) << (true != false) << endl;
    // cout << setw(width) << false << setw(width) << true << setw(width) << (false != true) << endl;
    // cout << setw(width) << false << setw(width) << false << setw(width) << (false != false) << endl;
    bool P = true, Q = true;
    cout << setw(width) << P << setw(width) << Q << setw(width) << (P != Q) << endl;
    Q = false;
    cout << setw(width) << P << setw(width) << Q << setw(width) << (P != Q) << endl;
    P = false;
    Q = !Q;
    cout << setw(width) << P << setw(width) << Q << setw(width) << (P != Q) << endl;
    Q = !Q;
    cout << setw(width) << P << setw(width) << Q << setw(width) << (P != Q) << endl;
}

int main()
{
    int choice;    
    cout << "Please enter the quiz number (1-6) for the extra ";
    cout << "credit you would like to see: ";
    cin >> choice;

    switch (choice)
    {
        case 1: quiz01_ec();
                break;
        case 2: quiz02_ec();
                break;
        case 3: quiz03_ec();
                break;
        case 4: quiz04_ec();
                break;
        case 5: quiz05_ec();
                break;
        case 6: quiz06_ec();
                break;
        default: cout << "Invalid Choice\n";
    }

}