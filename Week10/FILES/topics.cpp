#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;

    infile.open("topics.txt");
    if (infile)
    {
        string topic;
        int count = 0;
        while (getline(infile, topic))
        {
            cout << topic << endl;
            count++;
        }
        cout << "Total topics: " << count << endl;
    }
    else
    {
        cout << "Error opening file." << endl;
        return 1;
    }
    infile.close();
    return 0;
}