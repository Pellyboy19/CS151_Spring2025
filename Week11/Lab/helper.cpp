#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function prototypes
bool isEven(int num);
bool isOdd(int num);
string allUpper(string str);
string allLower(string str);
int vowelCount(string str);
int consonantCount(string str);
string encode(string str);

int main() {
    
    cout << boolalpha;
    cout << "isEven(6): " << isEven(6) << endl;
    cout << "isOdd(6): " << isOdd(6) << endl;
    cout << "isEven(7): " << isEven(7) << endl;
    cout << "isOdd(7): " << isOdd(7) << endl;

   
    string sample = "HeLLo";
    cout << "allUpper(\"" << sample << "\"): " << allUpper(sample) << endl;
    cout << "allLower(\"" << sample << "\"): " << allLower(sample) << endl;

   
    string word = "Education";
    cout << "vowelCount(\"" << word << "\"): " << vowelCount(word) << endl;
    cout << "consonantCount(\"" << word << "\"): " << consonantCount(word) << endl;

    
    string text = "Zoo";
    cout << "encode(\"" << text << "\"): " << encode(text) << endl;

    return 0;
}


bool isEven(int num) {
    return (num % 2 == 0);
}


bool isOdd(int num) {
    return (num % 2 != 0);
}


string allUpper(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}


string allLower(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}


int vowelCount(string str) {
    int count = 0;
    str = allLower(str);
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}


int consonantCount(string str) {
    int count = 0;
    str = allUpper(str);
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (isalpha(ch) && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            count++;
        }
    }
    return count;
}


string encode(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'z') {
            str[i] = 'a';
        } else if (str[i] == 'Z') {
            str[i] = 'A';
        } else if (isalpha(str[i])) {
            str[i]++;
        }
    }
    return str;
}
