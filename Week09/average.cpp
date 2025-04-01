#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    
    const int N = 5 + rand() % 16;  // Random number from 5 to 20

    
    vector<int> array(N);
    for (int i = 0; i < N; ++i) {
        array[i] = rand() % 101;  // Random number from 0 to 100
    }

   
    cout << "[";
    for (int i = 0; i < N; ++i) {
        cout << array[i];
        if (i != N - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Calculate sum and average
    int sum = 0;
    for (int num : array) {
        sum += num;
    }
    double average = static_cast<double>(sum) / N;

    // Print sum and average (to two decimal places)
    cout << "Sum: " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    return 0;
}
