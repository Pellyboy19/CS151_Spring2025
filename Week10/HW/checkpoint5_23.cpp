/*
5.23 - Write a short program that opens the file created by the program you wrote for
       Checkpoint 5.22, reads all of the numbers from the file, and displays them.
*/
#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    ifstream inputFile;         
    inputFile.open("numbers.txt");  

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    int number;

   
    while (inputFile >> number) {
        cout << number << endl;
    }

    inputFile.close();  

    return 0;
}
