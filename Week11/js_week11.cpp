#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void hello();
void hello(string);
string getName();
double hypotenuse(double a, double b);

int main()
{
    // hello();
    // hello("Peter Parker");
    // cout << getName() << endl;
    // hello(getName());

    // string avengers[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Avenger " << i + 1 << ": ";
    //     avengers[i] = getName();
    // }
    // cout << "[";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << avengers[i];
    //     if (i < 4)
    //     {
    //         cout << ", ";
    //     }
    // }
    // cout << "]" <<endl;
    cout << fixed << setprecision(1);
    cout << hypotenuse(3.0,4.0) << endl;
    return 0;
}

void hello()
{
    cout << "Hello World!\n";
}

void hello(string name)
{
    cout << "Hello " << name << endl;
}

string getName()
{
    string name;
    cout << "Please enter your name: ";
    getline(cin,name);
    return name;
}

double hypotenuse(double a, double b)
{
    double c_squared;
    c_squared = pow(a,2) + pow(b, 2);
    return sqrt(c_squared);
}