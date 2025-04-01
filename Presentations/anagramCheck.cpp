/*
    define a function that takes two strings as input and returns true if they are anagrams of each other.
    Otherwise, it returns false.
    An anagram is a word formed by rearranging the letters of a different word, using all the original letters exactly once.
    For example, "listen" and "silent" are anagrams of each other.
    "triangle" and "integral" are also anagrams.
    The casing of the letters does not matter, so "Triangle" and "integral" are also anagrams.
    You can assume that the input will only contain english letters.
*/

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