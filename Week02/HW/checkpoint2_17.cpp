/*
Write a program that stores your name, address, and phone number in three
separate string objects. Display the contents of the string objects on the screen.
*/

#include <iostream>
#include <string>  

using namespace std;

int main() {
   
    string name = "Pelumi Akinlotan";         
    string address = "50 arnord, New York, NY"; 
    string phone = "6469668089";  
    
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;

    return 0;
}
