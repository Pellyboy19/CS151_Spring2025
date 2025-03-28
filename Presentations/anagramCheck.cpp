#include <iostream>
#include <string>
#include <cassert>
#include "_functions.h"


using namespace std;
using namespace Presentations;
void anagramCheckTest();

bool anagramCheck(const string& str1, const string& str2); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    anagramCheckTest();
    string str1, str2;
    cout << "Enter two strings (separated by a space) and I will tell you if they are anagrams: ";
    cin >> str1 >> str2;
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

void anagramCheckTest()
{
    // anagramCheck
    assert(anagramCheck("listen", "silent") == true);
    assert(anagramCheck("triangle", "integral") == true);
    assert(anagramCheck("hello", "world") == false);
    assert(anagramCheck("hello", "world!") == false);
    assert(anagramCheck("TRIanGLE", "INTegral") == true);
}