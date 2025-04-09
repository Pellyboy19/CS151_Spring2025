#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile1;
    ifstream infile2;
    ofstream outfile;

    infile1.open("topics.txt");
    infile2.open("words.txt");
    outfile.open("combine.txt");
    
    if (infile1 && infile2 && outfile)
    {
        string line;
        while (getline(infile1, line))
        {
            outfile << line << endl;
        }
        while (getline(infile2, line))
        {
            outfile << line << endl;
        }
        cout << "Combined topics and words into combine.txt" << endl;
    }
    else
    {
        cout << "Error opening file." << endl;
        return 1;
    }
    infile1.close();
    infile2.close();
    outfile.close();
    return 0;
}