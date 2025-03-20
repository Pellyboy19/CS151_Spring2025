#include <iostream>
#include <string>
#include "_functions.h"

using namespace std;
using namespace Presentations;

bool anagramCheck(const string& str1, const string& str2); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    string str1, str2;
    cout << "Enter two strings and I will tell you if they are anagrams: ";
    getline(cin, str1);
    getline(cin, str2);
    if (anagramCheck(str1, str2))
    {
        cout << "The strings are anagrams." << endl;
    }
    else
    {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}