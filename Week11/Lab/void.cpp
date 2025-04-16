#include <iostream>
#include <string>

using namespace std;


void sayHello(string name);
void countdown(int n);
void printBlock(int n);
void printTriangle(int n);

int main() {
    
    sayHello("Pelumi");
    sayHello("");  

   
    countdown(5);
    countdown(-2);  

    
    printBlock(4);
    printBlock(0);  

    
    printTriangle(5);
    printTriangle(-1);  

    return 0;
}

// sayHello function
void sayHello(string name) {
    if (name == "") {
        cout << "Hello, World!" << endl;
    } else {
        cout << "Hello, " << name << "!" << endl;
    }
}


void countdown(int n) {
    if (n < 0) {
        cout << "Invalid input" << endl;
    } else {
        for (int i = n; i >= 0; i--) {
            cout << i << endl;
        }
    }
}


void printBlock(int n) {
    if (n < 1) {
        cout << "Invalid input" << endl;
    } else {
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
}


void printTriangle(int n) {
    if (n < 1) {
        cout << "Invalid input" << endl;
    } else {
        for (int row = 1; row <= n; row++) {
            for (int col = 0; col < row; col++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
}
