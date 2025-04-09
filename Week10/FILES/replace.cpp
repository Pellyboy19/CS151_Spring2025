#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream inFile("intro.txt");
    
    if (inFile)
    {
        char ch;
        while (inFile.get(ch))
        {
            if (ch == 'a' || ch == 'A')
            {
                cout << '4';
            }
            else if (ch == 'e' || ch == 'E')
            {
                cout << '3';
            }
            else if (ch == 'i' || ch == 'I')
            {
                cout << '1';
            }
            else if (ch == 'o' || ch == 'O')
            {
                cout << '0';
            }
            else
            {
                cout << ch;
            }
        }
        cout << endl;
        inFile.close();
    }
    else
    {
        cout << "File not found" << endl;
        return 1;
    }
    return 0;
}