#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;

    infile.open("words.txt");
    if (infile)
    {
        string word;
        int count = 0;

        while (infile >> word)
        {
            cout << word << endl;
            count++;
        }
        cout << "Total words: " << count << endl;
    }
    else
    {
        cout << "Error opening file." << endl;
        return 1;
    }
    infile.close();
    return 0;
}