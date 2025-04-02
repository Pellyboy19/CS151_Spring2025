#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0));  // Seed random number generator

    const int N = 5 + rand() % 16;  
    int array[20];  

    // Populate array with random values between 0 and 100
    for (int i = 0; i < N; ++i) {
        array[i] = rand() % 101;
    }


    cout << "[";
    for (int i = 0; i < N; ++i) {
        cout << array[i];
        if (i != N - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += array[i];
    }

    double average = static_cast<double>(sum) / N;

    // Output sum and average
    cout << "Sum: " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    return 0;
}
