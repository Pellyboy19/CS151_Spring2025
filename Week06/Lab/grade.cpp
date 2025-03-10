#include <iostream>
using namespace std;

int main() 
{
    int numberGrade;

    cout << "Enter your number grade (0 - 100): ";
    cin >> numberGrade; 

    
    if (numberGrade <0|| numberGrade > 100){
        cout << "input invalid"<< endl;
    }

    else{
        if (numberGrade <= 100 && numberGrade >=90)
        {
            cout << "A"<< endl;
        }

        if (numberGrade <= 89 && numberGrade >=80)
        {
                cout << "B"<< endl;
        }

        if (numberGrade <= 79 && numberGrade >=70)
        {
            cout << "C"<< endl;
        }

        if (numberGrade <= 69 && numberGrade >=60)
        {
            cout << "D"<< endl;
        }

        if (numberGrade <= 59 && numberGrade >=0)
        {
            cout << "F"<< endl;
        }
         
        cout << numberGrade << endl;
    }
   

    return 0;
}
