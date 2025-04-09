// Week10/Lab/fibonacci.cpp
#include <iostream>
using namespace std;

int main() {
    int n; 
    int fib; 
    int previous = 0; 
    int current = 1;  

    cout << "Enter a non-negative integer: ";
    cin >> n;

    
    if (n < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }

    if (n == 0) {
        fib = 0;
    } else if (n == 1) {
        fib = 1;
    } else {
        for (int i = 2; i <= n; i++) {
            fib = previous + current;
            previous = current;
            current = fib;
        }
    }

    cout << "Fibonacci number for " << n << " is " << fib << endl;

    return 0;
}
