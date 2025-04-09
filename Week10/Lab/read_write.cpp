#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("content.txt");
    ofstream outputFile("counts.txt");

    if (!inputFile) {
        cout << "Error opening content.txt" << endl;
        return 1;
    }

    int letters[26];
    for (int i = 0; i < 26; i++) {
        letters[i] = 0;
    }

    char ch;
    while (inputFile.get(ch)) {
        
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); 
        }

        
        if (ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A';
            letters[index]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        char letter = 'A' + i;
        outputFile << letter << ": " << letters[i] << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
