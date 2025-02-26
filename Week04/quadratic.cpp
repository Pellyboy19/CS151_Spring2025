#include <iostream>
#include <cmath> 

using namespace std;

int main() {
   
    double a, b, c, x_1, x_2, discriminant;

  
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

  
    discriminant = (b * b) - (4 * a * c);

 
    if (discriminant >= 0) {
      
        x_1 = (-b + sqrt(discriminant)) / (2 * a);
        x_2 = (-b - sqrt(discriminant)) / (2 * a);

       
        cout << "x_1 = " << x_1 << endl;
        cout << "x_2 = " << x_2 << endl;
    } else {
        cout << "No real roots exist." << endl;
    }

    return 0;
}