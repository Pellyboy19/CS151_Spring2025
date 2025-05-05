#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


string commas(string amount) {
    string result = "";
    bool isNegative = false;

    
    if (amount[0] == '-') {
        isNegative = true;
        amount = amount.substr(1); 
    }

    int len = amount.length();
    int count = 0;

    
    for (int i = len - 1; i >= 0; i--) {
        result = amount[i] + result;
        count++;
        if (count % 3 == 0 && i != 0) {
            result = "," + result;
        }
    }

    if (isNegative) {
        result = "-" + result;
    }

    return result;
}


void load(string nums[], int size) {
    char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    srand(time(0));

    for (int i = 0; i < size; i++) {
        int number = rand() % 9000 + 1000; 

        
        string str = "";
        int temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            str = digits[digit] + str;
            temp /= 10;
        }

        nums[i] = commas(str);
    }
}

int main() {
    const int SIZE = 10;
    string nums[SIZE];

    load(nums, SIZE);

    cout << "Formatted Random Numbers with Commas:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << nums[i] << endl;
    }

    
    cout << "\nExtra Tests:\n";
    cout << commas("1000") << endl;
    cout << commas("1000000") << endl;
    cout << commas("1234567890") << endl;
    cout << commas("-1234567") << endl;

    return 0;
}
